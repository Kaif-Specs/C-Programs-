#include <iostream>
#include <string>

int main() {
    std::string mainString = "This is a string";
    std::string subStringToDelete = "streing";

    
    size_t pos = mainString.find(subStringToDelete);

    
    if (pos != std::string::npos) {
        mainString.erase(pos, subStringToDelete.length());
        std::cout << "Substring found and deleted. Updated string: " << mainString << std::endl;
    } else {
        std::cout << "Substring not found in the string." << std::endl;
    }

    
    std::string anotherString = "one two one three one four";
    std::string pattern = "one ";

    size_t foundPos = anotherString.find(pattern);
    while (foundPos != std::string::npos) {
        anotherString.erase(foundPos, pattern.length());
        foundPos = anotherString.find(pattern);
    }
    std::cout << "After deleting: " << anotherString << std::endl;

    return 0;
}