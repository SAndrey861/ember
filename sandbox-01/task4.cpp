#include <cmath>
#include <iostream>

int celsius(int f) {
    return static_cast<int>(std::lround((f - 32) * 5.0 / 9.0));
}

int main() {
    std::cout << celsius(100) << ' ' << celsius(0) << ' ' << celsius(212) << '\n';
}
