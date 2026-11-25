#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point* pts = new Point[3]{
        {1, 0},
        {2, 0},
        {3, 0}
    };
    int sum = 0;
    for (int i = 0; i < 3; ++i) {
        sum += pts[i].x;
    }
    std::cout << sum << '\n';
    delete[] pts;
    pts = nullptr;
}
