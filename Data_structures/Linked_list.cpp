#include <iostream>
using namespace std;

struct Node {
    string inf;
    Node* next = nullptr;

    Node(string _inf) : inf(_inf) {};
};

struct List {
    Node* last;
    Node* first;

    List() : last(nullptr), first(nullptr) {};

    bool isEmpty() {
        return first == nullptr;
    }

    void pushBack(string info) {

        Node* p = new Node(info);

        if (this->isEmpty()) {
            first = p;
            last = p;
        }
        else {
            last->next = p;
            last = p;
        }
    }

    void print() {
        if (this->isEmpty()) {
            return;
        }
        else {
            Node* p = first;
            while (p != nullptr) {
                cout << p->inf << " ";
                p = p->next;
            }
        }
    }

    string at(int i) {
        Node* p = first;
        int counter = 0;
        while (p != nullptr) {
            if (counter == i) {
                return p->inf;
            }
            p = p->next;
            counter++;
        }
        return "Out of range";
    }



};

int main()
{

    List l;
    l.pushBack("123");
    l.pushBack("3455");
    l.pushBack("235");
    l.pushBack("3465");

    cout << '\n' << l.at(2);
    return 0;
}
