#include <iostream>

struct Vec {
    int x;
    int y;
};

Vec add(Vec a, Vec b) {
    return {a.x + b.x, a.y + b.y};
}

void scale(Vec* v, int k) {
    v->x *= k;
    v->y *= k;
}

int main() {
    Vec r = add({1, 2}, {3, 4});
    std::cout << r.x << ' ' << r.y << '\n';
    scale(&r, 2);
    std::cout << r.x << ' ' << r.y << '\n';
}
