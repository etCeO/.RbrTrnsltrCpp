#include <iostream> // includes input and output methods
#include <string> // includes std::string
#include <fstream> // includes ifstream and ofstream
#include "FileProcessor.h" // includes contents from header file
#include "Translator.h" // includes contents from Translator class
#include "Model.h" // includes contents from Model class

using std::cout; // shortens output to cout
using std::cin; // shortens input to cin
using std::endl; // shortens newline to endl

FileProcessor::FileProcessor(Translator translator) : translator(translator){};
// default constructor for FileProcessor
// translator is an object passed in for methods

FileProcessor::~FileProcessor(){}; // default destructor

void FileProcessor::processFile(std::string inFileName, std::string outFileName) {
// a public void method for reading a file and outputting its robber translation in html format
// inFileName is the name of a txt input file, outFileName is the name of a html output file
    cout << endl;

    std::ifstream inFile(inFileName); // ifstream inFile declared for reading
    std::string line; // string line created for reading
    std::ofstream outFile(outFileName); // ofstream outFile declared for writing

    if (inFile.is_open() && outFile.is_open()) {
    // in the case where both streams are opened properly
        // begin writing to file in html structure
        outFile << "<!DOCTYPE html>" << endl;
        outFile << "<html>" << endl;
        outFile << "<head>" << endl;
        outFile << "    <title>Lopez_E_A1_html</title>" << endl; // html header
        outFile << "</head>" << endl;
        outFile << "<body>" << endl;
        outFile << "    <h1>Robber Language Translation</h1>" << endl; // html site title

        bool sentence; // bool variable for keeping track if lines are sentences or not
        std::string translatedLine; // string variable for storing the robber translations of one line
        std::string translation = ""; // string variable for storing translations in the terminal
        
        while (std::getline(inFile, line)) {
        // while there are lines to be read in the txt file
            cout << line << endl; 
            // print English words or sentences with newlines in the terminal
            outFile << "<p><b>" << line << "</b></p>" << endl;
            // write each English line in bold in html

            sentence = false; // sentence is first initialized to false
            for (char c : line) { // for every character in line
                if (!isalpha(c)) { // if there are special characters that are not letters
                    sentence = true; // then this is not a word
                    // sentence method covers punctuation and other exceptions
                    break; // break from the for loop
                }
            } 
            if (sentence) { // if the line is a sentence
                translatedLine = translator.translateEnglishSentence(line); // translatedLine is assigned to the translated sentence
                translation += translatedLine; // result is added to terminal translation with a newline
                translation += "\n";
            }
            else { // if the line is a word
                translatedLine = translator.translateEnglishWord(line); // translatedLine is assigned to the translated word
                translation += translatedLine; // result is added to terminal translation with a newline
                translation += "\n";
            }
            outFile << "<p><i>" << translatedLine << "</i></p>" << endl;
            // write each Rövarspråket line in italics in html
        }
        // output each line as a paragraph in html
        cout << endl; // newline for neatness
        cout << translation << endl; // print result of translation methods in the terminal

        outFile << "</body>" << endl; // end body
        outFile << "</html>" << endl;
        // close the html file

        inFile.close(); // close ifstream
        outFile.close(); // close ofstream

    }
    else { // if the files have problems opening
        cout << "Error: Something went wrong when opening the files!" << endl;
        // output an error saying so
    }

}