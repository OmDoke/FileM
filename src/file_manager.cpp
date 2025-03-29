#include "file_manager.h"
#include "utils.h"

void organizeFiles(const std::string &directory) {
    for (const auto &entry : std::filesystem::directory_iterator(directory)) {
        if (std::filesystem::is_regular_file(entry.path())) {
            std::string category = classifyFile(entry.path());
            std::filesystem::path newDir = std::filesystem::path(directory) / category;

            if (!std::filesystem::exists(newDir)) {
                std::filesystem::create_directory(newDir);
            }

            std::filesystem::path newLocation = newDir / entry.path().filename();
            std::filesystem::rename(entry.path(), newLocation);
            logMessage("Moved: " + entry.path().filename().string() + " -> " + category);
        }
    }
}
