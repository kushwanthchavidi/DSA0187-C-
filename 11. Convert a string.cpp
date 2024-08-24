#include <iostream>
#include <string>
#include <algorithm>
class StringConverter {
public:
    StringConverter(const std::string& str) : originalString(str) {}
    std::string toUpperCase() {
        std::string upperStr = originalString;
        std::transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
        return upperStr;
    }
    std::string toLowerCase() {
        std::string lowerStr = originalString;
        std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
        return lowerStr;
    }
private:
    std::string originalString;
};
int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    StringConverter converter(input);
    std::cout << "Original string: " << input << std::endl;
    std::cout << "Uppercase: " << converter.toUpperCase() << std::endl;
    std::cout << "Lowercase: " << converter.toLowerCase() << std::endl;
    return 0;
}