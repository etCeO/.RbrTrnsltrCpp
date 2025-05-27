#include <iostream> // includes input and output methods
#include <string> // includes std::string
#include "Model.h" // includes contents from Model class
#include "Translator.h" // includes contents from header file

Translator::Translator(Model model) : model(model){};
// default constructor for Translator
// model is an object passed in for methods

Translator::~Translator(){}; // default destructor

std::string Translator::translateEnglishWord(std::string w) {
// a public string method that takes in a word as a string w and returns its robber translation
// this method assumes all characters in w are letters, so punctuation and other special characters are not accounted for
    std::string robberWord = ""; // an empty empty string named robberWord is declared
    // robberWord will be where we store the final output of the translation
    for (char c : w) { // for every character in word w
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        // if letters are lowercase vowels
            robberWord += model.translateSingleVowel(c);
            // use translateSingleVowel method from Model to add revised c to robberWord
        }
        else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        // if letters are UPPERCASE vowels
            robberWord += model.translateSingleVowel(c);
            // use translateSingleVowel method from Model to add revised c to robberWord
        }
        else { // in the case of all other letters that are not vowels
        // these are consonants
            robberWord += model.translateSingleConsonant(c);
            // use translateSingleConsonant method from Model to add revised c to robberWord
        }
    }
    return robberWord; // returns final result
}

std::string Translator::translateEnglishSentence(std::string s) {
// a public string method that takes in a sentence as a string s and returns its robber translation
// punctuation and other special characters accounted for
    std::string robberSentence = ""; // an empty string named robberSentence is declared
    // robberSentence will be where we store the final output of the translation
    for (char c : s) { // for every character in sentence s
        if (isalpha(c)) { // if char c is a letter regardless of capitalization
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            // if letters are lowercase vowels
                robberSentence += model.translateSingleVowel(c);
                // use translateSingleVowel method from Model to add revised c to robberSentence                
            }
            else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            // if letters are UPPERCASE vowels
                robberSentence += model.translateSingleVowel(c);
                // use translateSingleVowel method from Model to add revised c to robberSentence                
            }
            else { // in the case of all other letters that are not vowels
            // these are consonants
                robberSentence += model.translateSingleConsonant(c);
                // use translateSingleConsonant method from Model to add revised c to robberSentence
            }
        }
        else { // when a character is not a letter
            robberSentence += c; // simply add this to robberSentence without revising it
        }
    }
    return robberSentence; // returns final result
}