#include <cstdint>
#include <iostream>

std::uint8_t pack(const bool b[8]) {
    std::uint8_t res = 0;
    for (int i = 0; i < 8; ++i) {
        if (b[i]) {
            res = static_cast<std::uint8_t>(res | (1u << i));
        }
    }
    return res;
}

int main() {
    bool b[8] = {true, false, false, true, true, false, false, false};
    std::uint8_t byte = pack(b);
    std::cout << static_cast<int>(byte) << '\n';
    for (int i = 0; i < 8; ++i) {
        if (i > 0) std::cout << ' ';
        std::cout << ((byte >> i) & 1);
    }
    std::cout << '\n';
}
