#include <cstdint>
#include <cstring>
#include <iostream>

void print_float_fields(float f) {
    std::uint32_t bits = 0;
    std::memcpy(&bits, &f, sizeof(bits));
    std::uint32_t sign = (bits >> 31) & 1u;
    std::uint32_t exp = (bits >> 23) & 0xFFu;
    std::cout << sign << ' ' << exp << '\n';
}

int main() {
    print_float_fields(-2.5f);
    print_float_fields(1.0f);
}
