#include <iostream> // includes input and output methods
#include <string> // includes std::string
#include "Model.h" // includes contents from Model class
#include "Translator.h" // includes contents from Translator class
#include "FileProcessor.h" // includes contents from FileProcessor class

using std::cout; // shortens output to cout
using std::cin; // shortens input to cin
using std::endl; // shortens newline to endl

int main(int argc, char* argv[]) { // main driver method
// takes in two file names as terminal input in characters during execution

    Model model; // creates Model object named model
    Translator translator(model); // creates Translator object passing model functions
    FileProcessor fp(translator); // creates FileProcessor object passing translator functions

    // PROGRAM METHODS

    try { // try processFile() method
        fp.processFile(argv[1], argv[2]);
        // using object fp, use the first index of terminal input as the file to be read
        // use the second index of terminal input as the file to output the Robber translation
        // if this works, you'll see both the reading and the translation in the terminal
    }
    catch (const std::exception& e) { // if something goes wrong
        std::cerr << "Error loading file... " << e.what() << endl;
        // print an error occurred and communicate what happened
        return 1; // end the program
    }

    cout << endl;

    return 0; // ends the program when success

}