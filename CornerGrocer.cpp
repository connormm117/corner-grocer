#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <iomanip>

class GroceryTracker {
private:
    std::map<std::string, int> itemFrequency;

public:
    // Load item data from file and count frequencies
    void loadItemsFromFile(const std::string& filename) {
        std::ifstream inputFile(filename);
        std::string item;
        if (inputFile.is_open()) {
            while (inputFile >> item) {
                ++itemFrequency[item];
            }
            inputFile.close();
        }
        else {
            std::cerr << "Error: Could not open input file.\n";
        }
    }

    // Write frequency data to backup file
    void writeBackupToFile(const std::string& filename) {
        std::ofstream outFile(filename);
        if (outFile.is_open()) {
            for (const auto& pair : itemFrequency) {
                outFile << pair.first << " " << pair.second << std::endl;
            }
            outFile.close();
        }
        else {
            std::cerr << "Error: Could not write to backup file.\n";
        }
    }

    // Display frequency of a specific item
    void printItemFrequency(const std::string& itemName) const {
        auto it = itemFrequency.find(itemName);
        if (it != itemFrequency.end()) {
            std::cout << itemName << " was purchased " << it->second << " times.\n";
        }
        else {
            std::cout << itemName << " was not found in the records.\n";
        }
    }

    // Display all items and their frequencies
    void printAllFrequencies() const {
        std::cout << "\nItem Purchase Frequencies:\n";
        for (const auto& pair : itemFrequency) {
            std::cout << std::setw(15) << std::left << pair.first << " " << pair.second << std::endl;
        }
    }

    // Display histogram of item frequencies
    void printHistogram() const {
        std::cout << "\nPurchase Frequency Histogram:\n";
        for (const auto& pair : itemFrequency) {
            std::cout << std::setw(15) << std::left << pair.first << " ";
            for (int i = 0; i < pair.second; ++i) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    }
};

// Display the main menu
void displayMenu() {
    std::cout << "\n--- Corner Grocer Menu ---\n";
    std::cout << "1. Search for item frequency\n";
    std::cout << "2. Display all item frequencies\n";
    std::cout << "3. Display histogram of item frequencies\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    GroceryTracker tracker;
    tracker.loadItemsFromFile("CS210_Project_Three_Input_File.txt");  // Input file name
    tracker.writeBackupToFile("frequency.dat");  // Backup file name

    int choice;
    std::string itemName;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter item name: ";
            std::cin >> itemName;
            tracker.printItemFrequency(itemName);
            break;
        case 2:
            tracker.printAllFrequencies();
            break;
        case 3:
            tracker.printHistogram();
            break;
        case 4:
            std::cout << "Exiting program. Goodbye!\n";
            break;
        default:
            std::cout << "Invalid input. Please choose a number between 1 and 4.\n";
        }
    } while (choice != 4);

    return 0;
}
