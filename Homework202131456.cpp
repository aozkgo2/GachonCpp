#include <iostream>
#include <string>
using namespace std;

struct node {
public:
    string name;
    int id = 0;
    float allowance = 0.0f;
    node* p_next = nullptr;
};

node* head = nullptr;

void input_node() {
    node* node1 = new node;
    node1->name = "김태형";
    node1->id = 202131456;
    node1->allowance = 200000;

    head = node1;

    node* node2 = new node;
    node2->name = "김훈희";
    node2->id = 202131457;
    node2->allowance = 200000;

    node1->p_next = node2;

    node* node3 = new node;
    node3->name = "이진우";
    node3->id = 202131419;
    node3->allowance = 200000;

    node2->p_next = node3;

    node* node4 = new node;
    node4->name = "한예찬";
    node4->id = 202131422;
    node4->allowance = 200000;

    node3->p_next = node4;
}

void print_node() {
    node* ptr = head;

    while (ptr != nullptr) {
        cout << ptr->name << " " << ptr->id << " " << ptr->allowance << endl;
        ptr = ptr->p_next;
    }
}

int main()
{
    input_node();
    print_node();

    return 0;
}