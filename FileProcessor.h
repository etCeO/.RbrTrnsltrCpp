#ifndef FILEPROCESSOR_H // instantiates class once
#define FILEPROCESSOR_H // defines FileProcessor class

#include <iostream> // includes input and output methods
#include <string> // includes std::string
#include <fstream> // includes ifstream and ofstream
#include "Translator.h" // includes contents from Translator class
#include "Model.h" // includes contents from Model class

using std::cout; // shortens output to cout
using std::cin; // shortens input to cin
using std::endl; // shortens newline to endl

class FileProcessor { // constructs class body

    private: // private variables
        Translator translator; // a Translator object called translator
        // this is helpful for calling the Translator class methods in FileProcessor

    public: // public methods and constructors

        FileProcessor(Translator translator); // default constructor that takes in a Translator
        ~FileProcessor(); // default destructor
        void processFile(std::string inFileName, std::string outFileName);
        // public void method for reading a file as string input and writing its Robber translation to an html
        // inFileName is the name of the txt file, outFileName is the name of the html file

};

#endif // end of class definition