#include<iostream>
using namespace std;
class Queue{
  int item[10];
  int rear= -1;
  int front = -1;
  public:void enqueue(int data){
    if(rear >9){
      cout << "overflow";
    }
    else{
      rear++;
      item[rear] = data;
      cout << item[rear] << "added" << endl;
    }
    if(front == -1){
      front = 0;
    }
  }
  public:void denqueue(){
    if(front < 0){
       cout << "UnderFlow" << endl;
    }
    else{
      cout << item[front] <<" " << "is deleted";
      front++;
      if(front > rear){
        front = -1;
        rear = -1;
      }
    }
  }
  public:void display(){
    for(int i=front; i<=rear; i++){
      cout << item[i] << " ," ;
    }
  }
};
int main(){
  Queue q;
  int a,b;
  cout << "1- To Add number" << endl;
  cout << "2- To Delete number" << endl;
  cout << "3- To display" << endl;
  do{
     cout << "\n Enter choice: ";
     cin >> a;
     if(a==1){
       cout << "Enter number to add: ";
       cin >> b;
       q.enqueue(b);
     }
     else if(a==2){
       q.denqueue();
     }
     else if(a == 3){
       q.display();
     }
     else{
       cout << "error";
     }
  }while(true);
}
