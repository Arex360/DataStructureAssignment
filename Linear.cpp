/*
Created by: Muhammad Owais
Subject: Data Structures and Algorithm design
Submitted to: Mr. Iqbal Latif
Program: Linear Searching of Array
*/


#include <iostream>
using namespace std;
class Linear{
  public: bool present;
  private: int ans;
  public: int search(int *arr,int x);
};
int Linear::search(int *arr, int x){
     int n = sizeof(arr);
     for(int i=0;i<n;i++){
       if(arr[i] == x){
         present = true;
         ans = i;
         break;
       }
     }
     if(present == 1){
       present = true;
       return ans;
     }
     else if (present == 0){
       present = false;
       return 0;
     }
}
int main(){
  int n;
  cout << "Enter the range: ";
  cin >> n;
  int a[n];
  for(int i=0;i<n;i++){
    cout << "Enter the number" << i+1 << ": ";
    cin >> a[i];
  }
  cout << "Enter number you want to search: ";
  int x;
  cin >> x;
  Linear L;
  int b = L.search(a,x);
  if(L.present == 0){
    cout << "Number doesn't exist";
  }
  else{
    cout << "At index " << b;
  }
}
