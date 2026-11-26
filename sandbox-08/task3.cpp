#include <iostream>

int hex_digit(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return 10 + (c - 'a');
    return 10 + (c - 'A');
}

int hex_value(const char* s) {
    int val = 0;
    for (int i = 2; s[i] != '\0'; ++i) {
        val = val * 16 + hex_digit(s[i]);
    }
    return val;
}

int main() {
    std::cout << hex_value("0x41") << ' '
              << hex_value("0xff") << ' '
              << hex_value("0x1A2") << '\n';
}
