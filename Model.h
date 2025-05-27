#ifndef MODEL_H // instantiates the class one time
#define MODEL_H // defines Model class

#include <iostream> // includes input and output functions
#include <string> // includes std::string

class Model { // constructs class body

    public: // public methods and constructors

        Model(); // default constructor
        ~Model(); // default destructor
        std::string translateSingleConsonant(char c);
        // public string method that returns the Robber version of a single consonant
        // character c is the parameter for consonants
        std::string translateSingleVowel(char v);
        // public string method that returns the Robber version of a single vowel
        // character v is the parameter for vowels

};

#endif // end of class definition