#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next;

  Node(int x){
    this->data = x;
    this->next = NULL;
  }
};

class LL{
  public:
    struct Node* head;
    LL(){
      this->head = NULL;
    }

    void pushFront(int val){
      struct Node* newNode = new Node(val);
      if(head == NULL){
        head = newNode;
        return;
      }

      newNode->next = head;
      head = newNode;
    }

    bool detectLoop(struct Node* h){

      if(h==NULL){
        return false;
      }

      struct Node* p1 = h;
      struct Node* p2 = h;

      while(p1 && p2 && p2->next != NULL){
        p1 = p1->next;
        p2 = p2->next->next;
        if(p1 == p2){
          return true;
        }
      }

      return false;
    }
};

int main(){
  LL l1;
  for(int i=1; i<=10; i++){
    l1.pushFront(i);
  }
  l1.head->next->next = l1.head;

  cout << "There is a loop in l1: " << l1.detectLoop(l1.head) << endl;

  LL l2;
  for(int i=1; i<=10; i++){
    l2.pushFront(i);
  }

  cout << "There is a loop in l2: " << l2.detectLoop(l2.head) << endl;
}