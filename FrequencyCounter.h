#ifndef FREQUENCYCOUNTER_H
#define FREQUENCYCOUNTER_H

#include <map>
#include <string>
#include <fstream>
#include "WordFrequency.h"

class FrequencyCounter {
private:
    std::map<std::string, int> wordMap;
    std::string inputFilename;
    std::string outputFilename;

public:
    FrequencyCounter();
    void run();
    void readInputText();
    void countWordFrequency();
    void displayWordFrequency() const;
    void writeWordFrequencyToFile() const;
};

#endif 

