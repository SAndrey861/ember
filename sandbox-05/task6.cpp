#include <iostream>

void caesar(char* s, int shift) {
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = static_cast<char>('a' + (s[i] - 'a' + shift) % 26);
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = static_cast<char>('A' + (s[i] - 'A' + shift) % 26);
        }
    }
}

int main() {
    char s[] = "Hello, World!";
    caesar(s, 3);
    std::cout << s << '\n';
}
