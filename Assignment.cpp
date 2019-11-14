#include <iostream>
using namespace std;
int main() {
  int n;
  int Arr[n];
  cout << "Enter the size of Array";
  cin >> n;
  int i,j, temp;
  bool Result = true;
  for(i=0;i<n;i++)
  cin >> Arr[i];
  for(i=0;i<n;i++){
    temp = Arr[i];
    for(j=2;j<(temp/2);j++){
      if(temp % j == 0){
        Result = false;
        break;
      }
    }
   if(Result){
     cout << temp << " is prime number" << endl;
   }
   else if(temp == 1){
     cout << temp << "is not prime number";
   }
   else{
     cout << temp << " is not prime number" << endl;
   }
  }
}
