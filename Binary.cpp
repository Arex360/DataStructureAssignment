#include<iostream>
using namespace std;
class Binary{
  private: int first;
  private: int last;
  private: int middle;
  public: int search(int arr[], int n, int x);
};
int Binary::search(int arr[], int n, int x){
    first = 0;
    last = n - 1;
    middle = (first + last) /2;
    while(first <= last){
        if(arr[middle] < x){
            first = middle + 1;
        }
        else if(arr[middle] == x){
            return middle;
            break;
        }
        else{
            last = middle -1;
        }
        middle = (first+last)/2;
    }
    if(first > last){
        return -9999;
    }
}
int main(){
    Binary b;
    int m,num;
    cin >> m;
    int Array[m];
    for(int i = 0; i < m; i++){
        cout << "Enter the Number" << i+1 << ": ";
        cin >> Array[i];
    }
    cout << "Enter the number to be searched: ";
    cin >> num;
    int output =  b.search(Array,m,num);
    if(output != -9999){
        cout << "Found at index: " << output;
    }
    else{
        cout << "Not Found";
    }
}
