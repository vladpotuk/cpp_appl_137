#ifndef WORDFREQUENCY_H
#define WORDFREQUENCY_H

#include <string>

struct WordFrequency {
    std::string word;
    int frequency;

    WordFrequency(const std::string& w, int f) : word(w), frequency(f) {}
};

#endif 

