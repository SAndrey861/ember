#include <iostream>

int collatz_steps(int n) {
    int steps = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        ++steps;
    }
    return steps;
}

int main() {
    int best_n = 1;
    int best_steps = 0;
    for (int n = 1; n <= 99; ++n) {
        int s = collatz_steps(n);
        if (s > best_steps) {
            best_steps = s;
            best_n = n;
        }
    }
    std::cout << best_n << ' ' << best_steps << '\n';
}
