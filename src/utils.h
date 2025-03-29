#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <fstream>
#include <filesystem>

std::string classifyFile(const std::filesystem::path &filePath);
void logMessage(const std::string &message);

#endif
