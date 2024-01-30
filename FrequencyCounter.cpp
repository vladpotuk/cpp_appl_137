#include "FrequencyCounter.h"
#include <iostream>

FrequencyCounter::FrequencyCounter() {
    inputFilename = "input.txt";
    outputFilename = "output.txt";
}

void FrequencyCounter::run() {
    readInputText();
    countWordFrequency();
    displayWordFrequency();
    writeWordFrequencyToFile();
}

void FrequencyCounter::readInputText() {
    std::ifstream inputFile(inputFilename);
    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        return;
    }

    std::string word;
    while (inputFile >> word) {
        
        for (char& c : word) {
            c = std::tolower(c);
        }
        wordMap[word]++;
    }

    inputFile.close();
}

void FrequencyCounter::countWordFrequency() {
    
}

void FrequencyCounter::displayWordFrequency() const {
    
}

void FrequencyCounter::writeWordFrequencyToFile() const {
    
}
