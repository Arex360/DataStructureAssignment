#include <iostream>
using namespace std;
struct node{
  int num;
  node* next;
};
bool isEmpty(node *head){
   if(head == NULL){
     return true;
   }
   else
    return false;
}
int menu(){
  int c;
  cin >> c;
  return c;
}
void insertFirst(node *&head, node *&last, int n){
     node *temp = new node;
     temp->num = n;
     temp->next = NULL;
     head = temp;
     last = temp;
}
void insert(node *&head, node *&last, int n){
     if(isEmpty(head)){
        insertFirst(head, last, n);
     }
     else{
       node *temp = new node;
       temp->num = n;
       temp->next = NULL;
       last->next = temp;
       last = temp;
     }
}
void remove(node *&head, node *&last){
    if(isEmpty(head)){
      cout << "Empty";
    }
    else if(head == last){
        delete head;
        head == NULL;
        last = NULL;
    }
    else{
      node *temp = head;
      head = head->next;
      delete temp;
    }
}
void show(node *c){
  if(isEmpty(c)){
    cout << "Empty";
  }
  else{
    cout << "The list is \n";
    while(c != NULL){
      cout << c->num << endl;
      c = c->next;

    }
  }
}
int main() {
  cout << "1. Add item" << endl;
  cout << "2. remove" << endl;
  cout << "3. SHow" << endl;
  cout << "4. Exit" << endl;
  node *head = NULL;
  node *last = NULL;
  char choice;
  int num;
  do{
   choice = menu();
   switch(choice){
     case 1:
           cin >> num;
           insert(head,last,num);
           cout << "added \n";
           break;
     case 2: 
           remove(head,last);
           cout << "removed";
          break;
      case 3:
            show(head);
            break;
      default:
            cout << "End";
            choice = 4;
   }
  }while(choice != 4);
}
