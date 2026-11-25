#include <iostream>

void swap_ptr(int* x, int* y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void sort3(int* a, int* b, int* c) {
    if (*a > *b) swap_ptr(a, b);
    if (*b > *c) swap_ptr(b, c);
    if (*a > *b) swap_ptr(a, b);
}

int main() {
    int a1 = 3, b1 = 1, c1 = 2;
    sort3(&a1, &b1, &c1);
    std::cout << a1 << ' ' << b1 << ' ' << c1 << '\n';

    int a2 = 9, b2 = 9, c2 = 1;
    sort3(&a2, &b2, &c2);
    std::cout << a2 << ' ' << b2 << ' ' << c2 << '\n';
}
