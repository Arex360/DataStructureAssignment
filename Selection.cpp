#include <iostream>
using namespace std;
int n;
class Selection{
     public: void Swap(int *a, int *b);
     public: void Sort(int *arr);
     public: void Display(int *arr);
};
void Selection::Swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void Selection::Sort(int *arr){
      int size = sizeof(arr);
      int i, j, Imin_Value;    
    for (i = 0; i < size-1; i++)  
    {   
        Imin_Value = i;  
        for (j = i+1; j < size; j++)  
        if (arr[j] < arr[Imin_Value])  
            Imin_Value = j;  
        Swap(&arr[Imin_Value], &arr[i]);  
    }  
}
void Selection::Display(int *arr){
   int size = sizeof(arr);
  for(int i = 0;i<size;i++){
    cout << arr[i] << endl;
  }
}
int main(){
  Selection s;
  int range;
  cout << "Enter total numbers: ";
  cin >> range;
  int A[range];
  for(int i=0;i<range;i++){
    cout << "Enter number" << i+1;
    cin >> A[i];
  } 
  s.Sort(A);
  s.Display(A);
}
