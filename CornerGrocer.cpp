#include <iostream>
#include "GroceryTracker.h"
using namespace std;

// Function to display the menu options
void displayMenu() {
    cout << "Menu Options:" << endl;
    cout << "1. Look up item frequency" << endl;
    cout << "2. Print all item frequencies" << endl;
    cout << "3. Print histogram of item frequencies" << endl;
    cout << "4. Exit" << endl;
}

int main() {
    GroceryTracker tracker;
    string inputFile = "CS210_Project_Three_Input_File.txt";
    string backupFile = "frequency.dat";
    string item;
    int choice;

    // Read data from the input file and save to backup file
    tracker.readData(inputFile);
    tracker.saveData(backupFile);

    // Do not display all items initially, proceed directly to the menu
    // cout << "All items and their frequencies from the input file:" << endl;
    // tracker.printAllFrequencies();
    // cout << endl;

    while (true) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "You entered choice: " << choice << endl; // Debug print to check user input

        switch (choice) {
        case 1:
            // Prompt user to input the item they wish to look for
            cout << "Enter the item name: ";
            cin >> item;
            // Print the frequency of the specified item
            cout << item << " was purchased " << tracker.getItemFrequency(item) << " times." << endl;
            break;

        case 2:
            // Print the list of all items with their frequencies
            tracker.printAllFrequencies();
            break;

        case 3:
            // Print a histogram of all items with their frequencies
            tracker.printHistogram();
            break;

        case 4:
            // Exit the program
            cout << "Exiting the program." << endl;
            return 0;

        default:
            // Invalid option, prompt again
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
