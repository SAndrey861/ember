#include <cctype>
#include <cstring>
#include <iostream>

bool is_palindrome(const char* s) {
    int left = 0;
    int right = static_cast<int>(std::strlen(s)) - 1;
    while (left < right) {
        char a = static_cast<char>(std::tolower(static_cast<unsigned char>(s[left])));
        char b = static_cast<char>(std::tolower(static_cast<unsigned char>(s[right])));
        if (a != b) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

int main() {
    std::cout << is_palindrome("Level") << ' '
              << is_palindrome("Radar") << ' '
              << is_palindrome("hello") << '\n';
}
