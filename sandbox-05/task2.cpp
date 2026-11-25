#include <cstdint>
#include <iostream>

std::uint8_t mirror(std::uint8_t b) {
    std::uint8_t res = 0;
    for (int i = 0; i < 8; ++i) {
        res = static_cast<std::uint8_t>((res << 1) | (b & 1));
        b = static_cast<std::uint8_t>(b >> 1);
    }
    return res;
}

int main() {
    std::cout << std::hex
              << static_cast<int>(mirror(0x01)) << ' '
              << static_cast<int>(mirror(0xA0)) << ' '
              << static_cast<int>(mirror(0x3C)) << '\n';
}
