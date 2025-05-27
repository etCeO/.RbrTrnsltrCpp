#include <iostream> // includes input and output methods
#include <string> // includes std::string
#include "Model.h" // includes contents from header file

Model::Model(){}; // default constructor

Model::~Model(){}; // default destructor

std::string Model::translateSingleConsonant(char c) {
// a public string method translateSingleConsonant() with char parameter c
// following Robber language rules, consonant c is doubled with an o inserted in between
    std::string s = ""; // an empty string is created
    s += c; // c is added to s (capitilization preserved)
    s += "o"; // o is added to s
    s += c; // c is added to s once more (capitilization preserved)
    return s; // return full string in from of "[c]o[c]"
}

std::string Model::translateSingleVowel(char v) {
// a public string method translateSingleConsonant() with char parameter v
// following Robber language rules, vowels are left intact, however, must be converted to string form
    std::string s = ""; // an empty string is created
    s += v; // char v is concatenated into string form
    return s; // return s as "v"
}