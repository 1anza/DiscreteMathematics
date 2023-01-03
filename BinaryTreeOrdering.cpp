/*
Generate a binary tree using a numerical sort order (smaller is left,
greater is right). Hard code the input in this exact order:
50, 75, 25, 15, 60, 35, 90, 42, 20, 27, 5, 55, 95, 80, 70
Using that input, I know what the tree looks like and the correct output.

Print out Preorder, Inorder, and Postorder outputs in that order.
*/

#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

struct node* create(int item) { 
    struct node* node = (struct node*)malloc(sizeof(struct node));

    node->data = item;
    node->prev = nullptr;
    node->next = nullptr;

    return node;
}

void pre(struct node* node) {
    if (!node)
        return;

    cout << node->data << " ";
    pre(node->prev);
    pre(node->next);
}

void in(struct node* node) {
    if (!node)
        return;

    in(node->prev);
    cout << node->data << " ";
    in(node->next);
}

void post(struct node* node) {
    if (!node)
        return;

    post(node->prev);
    post(node->next);
    cout << node->data << " ";
}

int main() { 
    struct node* node = create(50);
    node->prev = create(25);
    node->next = create(75);
    node->prev->prev = create(15);
    node->prev->next = create(35);
    node->prev->next->next = create(42);
    node->prev->prev->prev = create(5);
    node->prev->prev->next = create(20);
    node->prev->next->prev = create(27);
    node->next->prev = create(60);
    node->next->next = create(90);
    node->next->prev->prev = create(55);
    node->next->prev->next = create(70);
    node->next->next->prev = create(80);
    node->next->next->next = create(95);

    cout << "\nHardcoded Tree Input (smaller is left, greater is right): 50, 75, 25, 15, 60, 35, 90, 42, 20, 27, 5, 55, 95, 80, 70\n";
    cout << "\nPreorder: \n";
    pre(node);
    cout << "\n\nInorder: \n";
    in(node);
    cout << "\n\nPostorder: \n";
    post(node);
    cout << endl;

    return 0;
}
