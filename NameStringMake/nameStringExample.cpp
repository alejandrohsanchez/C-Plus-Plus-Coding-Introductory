#include <iostream>


int main() {
    int length;
    std::string name;

    std::cout << "Enter your name" << std::endl;

    // getline() includes spaces. cin sees the "space" token as a lexicon
    std::getline(std::cin, name);

    // Accessing letters in the string
    int stringIndex;
    int stringLength = name.size();
    std::cout << "Choose an index value in the string to pull from" << std::endl;
    while (true) {
        std::cin >> stringIndex;
        if (stringIndex >= stringLength || stringIndex < 0){
            std::cout << "Invalid index entry, try again" << std::endl;
        } else {
            break;
        }
    }
    std::cout << name[stringIndex] << std::endl;
}