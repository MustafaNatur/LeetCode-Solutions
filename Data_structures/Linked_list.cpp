#include <iostream>
using namespace std;

struct Node {
    string inf;
    Node* next;

    Node(string _inf) : inf(_inf), next(nullptr) {};
};

struct List {
    Node* last;
    Node* first;

    List() : last(nullptr), first(nullptr) {};

    bool isEmpty() {
        return first == nullptr;
    }

    void pushBack(string info) { // check this function tommorow

        Node* p = new Node(info);

        if (this->isEmpty()) {
            first = p;
            last = p;
        }
        else {
            last->next = p;
            last = p;
            last -> next = nullptr;
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

    Node *find(int index) {
        Node* p = first;
        int counter = 0;
        while (p != nullptr) {
            if (counter == index) {
                return p;
            }
            p = p->next;
            counter++;
        }
        return nullptr;
    }


    string at(int index) {
        return find(index) == nullptr ? "Out of the range" : find(index) -> inf;
    }

    void deleteAt(int index) {
        delete find(index);
        find(index - 1)->next = find(index + 1);
    }


};

int main()
{

    List l;
    l.pushBack("123");
    //l.pushBack("3455");
    // l.pushBack("235");
    // l.pushBack("3465");
    l.print();
    // cout << '\n';
    // l.deleteAt(2);
    // l.print();
    // cout << '\n';
    return 0;
}
