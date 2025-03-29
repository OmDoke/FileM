#include "utils.h"

std::string classifyFile(const std::filesystem::path &filePath) {
    std::string extension = filePath.extension().string();
    
    if (extension == ".jpg" || extension == ".png" || extension == ".jpeg") {
        return "Images";
    } else if (extension == ".mp4" || extension == ".avi" || extension == ".mkv") {
        return "Videos";
    } else if (extension == ".pdf" || extension == ".docx" || extension == ".txt") {
        return "Documents";
    } else {
        return "Others";
    }
}

void logMessage(const std::string &message) {
    std::ofstream logFile("log.txt", std::ios::app);
    if (logFile.is_open()) {
        logFile << message << std::endl;
        logFile.close();
    }
}
