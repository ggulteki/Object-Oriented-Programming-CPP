#include <iostream>
#include <string>

int main() {
    // Prompt the user to enter a string of characters
    std::cout << "Enter a string of characters: ";
    // Create a str object to store the string
    std::string str;
    // Get the string from standard input
    std::getline(std::cin, str);
    
    // Error handler for an empty string input   
    if (str.empty()) {
        std::cerr << "Error: Input string cannot be empty." << std::endl;
        return 1;
    }

    // Display the str length
    std::cout << "The string has " << str.length() << " characters." << std::endl;
   
    // Display the first character of the string
    std::cout << "The first character is: " << str[0] << std::endl;
    // Display the last character of the string
    std::cout << "The last character is: " << str[str.length() - 1] << std::endl;
   
    // Display the string in reverse order
    std::cout << "The string in reverse order is: ";
    
    for (int i = str.length() - 1; i >= 0; i--) {
        std::cout << str[i];
    }
    std::cout << std::endl;

    // Prompt the user to enter a substring to search for within the string
    std::cout << "Enter a substring to search: " << std::endl;
    std::string substring;
    std::getline(std::cin, substring);

    if (substring.empty()) {
        std::cerr << "Error: Substring cannot be empty." << std::endl;
        return 1;
    }

    // Search for the substring
    int result = str.find(substring);

    if (result != std::string::npos) {
        std::cout << "Substring found at index: " << result << std::endl;
    } else {
        std::cout << "Substring was not found." << std::endl;
    }

    return 0;
}