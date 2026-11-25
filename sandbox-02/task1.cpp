#include <cstdint>
#include <iostream>

bool parity(std::uint8_t b) {
    int ones = 0;
    for (int i = 0; i < 8; ++i) {
        ones += (b & 1);
        b = static_cast<std::uint8_t>(b >> 1);
    }
    return (ones & 1) == 1;
}

int main() {
    std::cout << parity(0xA3) << ' ' << parity(0x07) << ' ' << parity(0xFF) << '\n';
}
