#include <iostream>
#include <vector>

// //struct for keeping each word
struct Keywords
{
    std::string word;
    std::string description;
};

// //vector for keeping all words & their definition
std::vector<Keywords> cpp_keywords_vector={


    {"bool", "Boolean (true/false)"},
    {"break", "Exits a loop or switch"},
    {"case", "Defines a branch in switch"},
    {"char", "Character data type"},
    {"class", "Blueprint for objects"},
    {"continue", "Skips current iteration of loop"},
    {"delete", "Deallocates dynamic memory"},
    {"do", "Loop executes at least once"},
    {"double", "Double-precision float"},
    {"else", "Alternative branch of if"},
    {"float", "Floating-point number"},
    {"for", "Loop with initialization, condition, increment"},
    {"if", "Conditional statement"},
    {"int", "Integer data type"},
    {"namespace", "Groups identifiers to avoid name conflicts"},
    {"new", "Allocates memory dynamically"},
    {"private", "Access specifier: accessible only in class"},
    {"protected", "Access specifier: accessible in class & derived"},
    {"public", "Access specifier: accessible everywhere"},
    {"return", "Returns from function"},
    {"struct", "User-defined data structure"},
    {"switch", "Multi-way branch statement"},
    {"using", "Used to access names from a namespace"},
    {"void", "Represents no return type"},
    {"while", "Loop while condition is true"}

};


