#include <iostream>

void eval(const char* expr) {
    int i = 0;
    int left = 0;
    while (expr[i] >= '0' && expr[i] <= '9') {
        left = left * 10 + (expr[i] - '0');
        ++i;
    }
    char op = expr[i];
    ++i;
    int right = 0;
    while (expr[i] >= '0' && expr[i] <= '9') {
        right = right * 10 + (expr[i] - '0');
        ++i;
    }
    if (expr[i] != '\0') {
        std::cout << "error at " << i << '\n';
        return;
    }
    int result = (op == '+') ? left + right : (op == '-') ? left - right : left * right;
    std::cout << result << '\n';
}

int main() {
    eval("12+34");
    eval("7*6x");
}
