# 📂 C++ File Manager

## 📝 Project Overview
The **C++ File Manager** is a console-based application that organizes files in a given directory by categorizing them into different folders based on their file types. It supports images, videos, documents, and other file formats.

## 🚀 Features
- 📂 **Categorizes files** into `Images`, `Videos`, `Documents`, and `Others`.
- 🏗 **Automatically creates directories** for file organization.
- 🔀 **Moves files** to their respective folders.
- 📝 **Logs file movements** in `log.txt`.
- 🏎 **Fast and efficient** file handling using `std::filesystem` (C++17).


## 🛠 Installation & Compilation
### **Prerequisites**
- **g++ (MinGW for Windows users)**
- C++17 or later

### **Clone the Repository**
```sh
git clone https://github.com/your-username/FileManager.git
cd FileManager
```

### **Compile the Program**
```sh
g++ -std=c++17 -o file_manager src/main.cpp src/file_manager.cpp src/utils.cpp
```

### **Run the Program**
```sh
./file_manager
```

## 📌 Usage
1. **Enter the directory path** where files need to be organized.
2. The program **creates folders** (`Images`, `Videos`, `Documents`, `Others`).
3. It **moves files** based on their extensions.
4. **Check the log** (`log.txt`) for details.

## 📜 Supported File Types
| Category   | File Extensions |
|------------|----------------|
| Images     | `.jpg`, `.png`, `.jpeg` |
| Videos     | `.mp4`, `.avi`, `.mkv` |
| Documents  | `.pdf`, `.docx`, `.txt` |
| Others     | Any other file types |

## 🖥 Example Output
```
Enter the directory path to organize: C:\Users\Admin\Desktop\test_files
Moved: photo.jpg -> Images
Moved: video.mp4 -> Videos
Moved: document.pdf -> Documents
File organization complete!
```

## 🤝 Contributing
1. **Fork the repository**
2. **Create a new branch** (`git checkout -b feature-name`)
3. **Commit your changes** (`git commit -m "Added new feature"`)
4. **Push to GitHub** (`git push origin feature-name`)
5. **Submit a Pull Request**

## 🏆 Acknowledgments
- Uses `std::filesystem` for modern C++ file handling.
- Inspired by basic file organization tools.

