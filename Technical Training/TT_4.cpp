#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int d){
    this->data = d;
    this->next = NULL;
  }
};

void insertAtHead(Node* &head, int d){
  Node* temp = new Node(d);
  if (head == NULL){
    head = temp;
  }
  else {
    temp->next = head;
    head = temp;
  }
}

void printHead(Node* &head){
  Node* temp = head;

  while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}

int main(){
  int n, d;
  cout<<"Enter the number of elements in linked list: ";
  cin>>n;

  Node* head = NULL;

  for (int i=0;i<n;i++){
    cout<<"Enter the element: ";
    cin>>d;
    insertAtHead(head, d);
  }

  printHead(head);

  return 0;
}