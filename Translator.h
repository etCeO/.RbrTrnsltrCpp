#ifndef TRANSLATOR_H // instantiates class once
#define TRANSLATOR_H // defines Translator class

#include <iostream> // includes input and output methods
#include <string> // includes std::string
#include "Model.h" // includes contents from Model class

class Translator { // constructs class body

    private: // private variables
        Model model; // a Model object called model
        // this is helpful for calling the Model class methods in Translator

    public: // public methods and constructors

        Translator(Model model); // default constructor that takes in a model object
        ~Translator(); // default destructor
        std::string translateEnglishWord(std::string w);
        // public string method that returns the Robber translation for a single word
        // string w is the parameter for words
        std::string translateEnglishSentence(std::string s);
        // public string method that returns the Robber translation of an entire sentence
        // string s is the parameter for sentences

};

#endif // end of class definition