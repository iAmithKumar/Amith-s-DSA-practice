#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
};

// function that returns the sum of two numbers
Node* addTwoNumbers(Node* l1, Node* l2){
  Node* l3 = new Node();
  Node* p3 = l3;
  int carry = 0;

  while(l1 || l2 || carry){

    int sum = 0;
    int a = l1 ? l1->data : 0;
    int b = l2 ? l2->data : 0;

    sum = a + b + carry;

    carry = sum/10;
    sum %= 10;

    p3->next = new Node(sum);
    p3 = p3->next;

    if(l1) l1=l1->next;
    if(l2) l2=l2->next;
  }

  return l3->next;
}

// UTILITY FUNCTIONS
// Function that displays the List
void Display(Node* head)
{
    if (head == NULL) {
        return;
    }
    while (head->next != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << head->data << endl;
}

// Function that adds element at the end of the Linked List
void push(Node** head_ref, int d)
{
    Node* new_node = new Node(d);
    new_node->next = NULL;
    if (*head_ref == NULL) {
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }
    Node* last = *head_ref;
    while (last->next != NULL && last != NULL) {
        last = last->next;
    }
    last->next = new_node;
    return;
}

int main()
{
    // Creating two lists

    Node* first = NULL;
    Node* second = NULL;
    Node* sum = NULL;
    push(&first, 2);
    push(&first, 4);
    push(&first, 9);
    push(&second, 5);
    push(&second, 6);
    push(&second, 4);
    push(&second, 9);
    cout << "First List : ";
    Display(first);
    cout << "Second List : ";
    Display(second);
    sum = addTwoNumbers(first, second);
    cout << "Sum List : ";
    Display(sum);
    return 0;
}