#include <cstdint>
#include <iostream>

int main() {
    std::uint16_t odo = 65000;
    int km = 0;
    while (odo != 0) {
        odo = static_cast<std::uint16_t>(odo + 1);
        ++km;
    }
    std::cout << km << '\n';
}
