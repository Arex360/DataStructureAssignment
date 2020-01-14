#include <iostream>
using namespace std;
class Linear{
  public: bool present;
  public: int ans;
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
       return ans;
     }
     else if (present == 0){
       return -9999;
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
  if(b== -9999){
    cout << "Number doesn't exist";
  }
  else{
    cout << "At index " << b;
  }
}
