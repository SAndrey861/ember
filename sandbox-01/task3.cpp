#include <iostream>

void to_upper(char* s) {
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = static_cast<char>(s[i] - ('a' - 'A'));
        }
    }
}

int main() {
    char s1[] = "hello world 2";
    char s2[] = "HAL 9000";
    to_upper(s1);
    to_upper(s2);
    std::cout << s1 << '\n';
    std::cout << s2 << '\n';
}
