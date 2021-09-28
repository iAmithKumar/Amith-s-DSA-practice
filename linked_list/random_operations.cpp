#include <iostream>
using namespace std;

struct Node{
    int val;
    struct Node* next;
    
    Node(int x){
        val = x;
    }
};

class MyLinkedList {
public:
    struct Node* head;
    MyLinkedList() {
        this->head = NULL;
    }
    
    int get(int index) {
        if(head == NULL){
            return -1;
        }
        struct Node* temp = head;
        int count = 0;
        while(count < index){
            temp = temp->next;
            count++;
            if(temp == NULL){
                return -1;
            }
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        struct Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            newNode->next = NULL;
            return;
        }
        
        newNode->next = head;
        head = newNode;
    }
    
    void addAtTail(int val) {
        struct Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            newNode->next = NULL;
            return;
        }
        
        struct Node* temp = head;
        while(temp->next != NULL){
            temp = temp-> next;
        }
        temp->next = newNode;
        newNode->next = NULL;

    }
    
    void addAtIndex(int index, int val) {
        struct Node* newNode = new Node(val);
        if(index == 0){
            newNode->next = head;
            head = newNode;
            return;
        }
        
        struct Node* temp = head;
        struct Node* cur;
        int count = 0;
        while(count < index){
            cur = temp;
            temp = temp->next;
            count++;
            if(temp == NULL && cur!=NULL){
                cur->next = newNode;
                newNode->next = NULL;
                return;
            }
        }
        cur->next = newNode;
        newNode->next = temp;
    }
    
    void deleteAtIndex(int index) {
        if(head == NULL){
            cout << "List empty" << endl;
        }
        struct Node* temp = head;
        if(index == 0){
            head = temp->next;
            temp->next = NULL;
            delete temp;
            return;
        }
        
        struct Node* cur = head;
        int count = 0;
        while(count < index){
            cur = temp;
            temp = temp->next;
            count++;
            if(temp == NULL){
                return;
            }
        }
        cur->next = temp->next;
        temp->next = NULL;
        delete temp;
    }

    void printList(){
      if(head == NULL){
        cout << "List is empty" << endl;
        return;
      }

      struct Node* temp = head;
      while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
      }
      cout << endl;
    }
};

int main(){

MyLinkedList* obj = new MyLinkedList();
 obj->addAtHead(10);
 obj->addAtTail(20);
 obj->addAtIndex(1,30);

 obj->printList();

 obj->deleteAtIndex(0);

 int param_1 = obj->get(1);

 cout << param_1 << endl;

  return 0;
}