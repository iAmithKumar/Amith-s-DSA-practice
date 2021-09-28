//Dummy file
#include<iostream>
using namespace std;

class Node{
  public:
    int data;
    Node *next;

    Node(int x){
      this->data = x;
      this->next = NULL;
    }
};

class LinkedList{
  public:
    Node *head;

    LinkedList() { this->head = NULL; }

    void insertAtBegin(int);
    void printList();
    void insertAtPos(int, int);
};

void LinkedList :: insertAtBegin(int x){
  Node *node = new Node(x);

  if(head == NULL){
    head = node;
    return;
  }

  node->next = head;
  head = node;
}

void LinkedList :: printList(){
  if(head == NULL){
    cout << "List is empty" << endl;
    return;
  }

  Node* temp = head;
  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void LinkedList :: insertAtPos(int pos, int val){
  Node* newNode = new Node(val);

  if(pos == 0){
    newNode->next = head;
    head = newNode;
    return;
  }

  Node* temp = head;
  Node* cur;
  int count=0;
  while(count < pos){
    cur = temp;
    temp = temp->next;
    count++;
    if(temp == NULL){
      cout << "Postion out of bound!" << endl;
      return;
    }
  }
  cur->next = newNode;
  newNode->next = temp;
}

int main(){
  LinkedList l1;

  l1.insertAtBegin(10);
  l1.insertAtBegin(20);
  l1.insertAtBegin(30);
  l1.insertAtBegin(40);

  l1.printList();

  l1.insertAtPos(1, 50);
  l1.insertAtPos(4, 60);

  l1.printList();

  return 0;
}
