#include <cmath>
#include <iostream>

int main() {
    int x = 5;
    std::cout << x << '\n';

    int y = 0;
    std::cout << y << '\n';

    long long big = 2147483647LL;
    big = big + 1;
    std::cout << big << '\n';

    int a[3] = {1, 2, 3};
    int i = 2;
    std::cout << a[i] << '\n';

    int c = 300;
    std::cout << c << '\n';

    if (std::fabs((0.1 + 0.2) - 0.3) < 1e-9) {
        std::cout << "equal\n";
    }
}
