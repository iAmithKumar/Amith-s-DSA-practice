#include<iostream>
using namespace std;

class Node{
  public:
    int data;
    Node *next;

    Node(int x){
      this->data = x;
    }
};

class LinkedList{
  public:
    Node *head;

    LinkedList() { this->head = NULL; }

    void insertAtEnd(int);
    void printList();
    void deleteAtBegin();
    int sizeOfList();
};

int LinkedList :: sizeOfList(){
  int count = 0;
  Node* cur = head;
  while(cur->next != head){
    count++;
    cur = cur->next;
  }
  return count+1;
}

void LinkedList :: insertAtEnd(int x){
  Node* node = new Node(x);

  if(head == NULL){
    head = node;
    node->next = head;
    return;
  }

  Node* it = head;
  while(it->next != head){
    it = it->next;
  }
  it->next = node;
  node->next = head;
} 

void LinkedList :: printList(){
  if(head == NULL){
    cout << "List is empty" << endl;
    return;
  }

  Node* temp = head;
  while(temp->next != head){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << temp->data << endl;
}

void LinkedList :: deleteAtBegin(){
  if(head == NULL){
    cout << "List Empty" << endl;
    return;
  }

  Node* cur = head;
  Node* temp = head;

  while(temp->next != head){
    temp = temp->next;
  }
  head = cur->next;
  temp->next = head;
  delete cur;
}

int main(){
  LinkedList l1;
  int n;
  cin >> n;

  for(int i=1; i<=n; i++){
    l1.insertAtEnd(i);
  }

  l1.deleteAtBegin();
  cout << "Number of nodes: " << l1.sizeOfList() << endl;
  l1.printList();
  return 0;
}