#include <iostream>

struct Node {
    int value;
    Node* next;
};

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int v = 1; v <= 3; ++v) {
        Node* n = new Node{v, nullptr};
        if (tail == nullptr) {
            head = n;
            tail = n;
        } else {
            tail->next = n;
            tail = n;
        }
    }
    int len = 0;
    for (Node* n = head; n != nullptr; n = n->next) {
        if (len > 0) std::cout << ' ';
        std::cout << n->value;
        ++len;
    }
    std::cout << '\n' << len << '\n';
    while (head != nullptr) {
        Node* next = head->next;
        delete head;
        head = next;
    }
}
