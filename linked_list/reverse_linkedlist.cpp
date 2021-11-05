/*
// This is just the main logic to reverse a linked list.

Node* reverseList(Node* head){
  Node *prev=NULL, *cur=head, nxt=NULL;

  while(cur != NULL){
    nxt = cur->next;
    cur->next = prev;
    prev = cur;
    cur = nxt;
  }

  head = prev;
  return head;
}

*/