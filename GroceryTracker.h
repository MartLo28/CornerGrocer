#ifndef GROCERYTRACKER_H
#define GROCERYTRACKER_H

#include <map>
#include <string>

class GroceryTracker {
private:
    std::map<std::string, int> itemFrequency;

public:
    // Method to read data from the file and store item frequencies
    void readData(const std::string& filename);

    // Method to get the frequency of a specific item
    int getItemFrequency(const std::string& item);

    // Method to print all item frequencies
    void printAllFrequencies();

    // Method to print a histogram of item frequencies
    void printHistogram();

    // Method to save the frequency data to a file
    void saveData(const std::string& filename);
};

#endif // GROCERYTRACKER_H
