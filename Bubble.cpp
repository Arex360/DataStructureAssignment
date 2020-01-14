#include<iostream>
using namespace std;
class Bubble{
   public: void Sort(int *Arr);
   public: void Display(int *Arr);
};
void Bubble::Sort(int *Arr){
   int n = sizeof(Arr);
  for(int i = n-2; i >0; i--){
    for(int j = 0; j < i; j++){
      if(Arr[j] > Arr[i]){
        int temp = Arr[j];
        Arr[j] = Arr[j+1];
        Arr[j+1] = temp;
      }
    }
  }
} 
void Bubble::Display(int *Arr){
    int n = sizeof(Arr);
    for(int i =0;i < n;i++){
      cout << Arr[i] << " , ";
    }
}
int main(){
  Bubble b;
  int n;
  cout << "Enter the range: ";
  cin >> n;
  int A[n];
  for(int i = 0; i < n ; i++){
     cin >> A[i];
  }
  b.Sort(A,10);
  b.Display(A);
}
