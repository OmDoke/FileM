#include <iostream>
#include "file_manager.h"

int main() {
    std::string directory;
    std::cout << "Enter the directory path to organize: ";
    std::cin >> directory;

    if (!std::filesystem::exists(directory) || !std::filesystem::is_directory(directory)) {
        std::cerr << "Error: Invalid directory path!\n";
        return 1;
    }

    organizeFiles(directory);
    std::cout << "File organization complete!\n";

    return 0;
}
