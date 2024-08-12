#include <iostream>
#include <fstream>
#include "GroceryTracker.h"
using namespace std;

// Method to read data from the file and store item frequencies
void GroceryTracker::readData(const std::string& filename) {
    ifstream inFile(filename);  // Input file stream
    string item;

    // Check if file is open
    if (inFile.is_open()) {
        // Read items from file
        while (inFile >> item) {
            // If item is already in the map, increase its frequency
            if (itemFrequency.find(item) != itemFrequency.end()) {
                itemFrequency[item]++;
            }
            else {
                // Otherwise, add the item to the map with a frequency of 1
                itemFrequency[item] = 1;
            }
            // Remove debug print to check each item read
            // cout << "Read item: " << item << ", current count: " << itemFrequency[item] << endl;
        }
        // Close the file
        inFile.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }
}

// Method to get the frequency of a specific item
int GroceryTracker::getItemFrequency(const std::string& item) {
    // Check if the item is in the map and return its frequency
    if (itemFrequency.find(item) != itemFrequency.end()) {
        return itemFrequency[item];
    }
    else {
        // If item is not found, return 0
        return 0;
    }
}

// Method to print all item frequencies
void GroceryTracker::printAllFrequencies() {
    // Iterate through the map and print each item and its frequency
    for (const auto& pair : itemFrequency) {
        cout << "Item: " << pair.first << ", Frequency: " << pair.second << endl;
    }
}

// Method to print a histogram of item frequencies
void GroceryTracker::printHistogram() {
    // Iterate through the map and print each item followed by asterisks
    for (const auto& pair : itemFrequency) {
        cout << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            cout << "*";
        }
        cout << endl;
    }
}

// Method to save the frequency data to a file
void GroceryTracker::saveData(const std::string& filename) {
    ofstream outFile(filename);  // Output file stream

    // Check if file is open
    if (outFile.is_open()) {
        // Write each item and its frequency to the file
        for (const auto& pair : itemFrequency) {
            outFile << pair.first << " " << pair.second << endl;
        }
        // Close the file
        outFile.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }
}
