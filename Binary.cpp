/*
Created by: Muhammad Owais
Subject: Data Structures and Algorithm design
Submitted to: Mr. Iqbal Latif
Program: Binary Searching of Array
*/


#include<iostream>
using namespace std;
class Binary{
  private: int first;
  private: int last;
  private: int middle;
  public: bool present;
  public: int search(int *arr,int x);
};
int Binary::search(int *arr,int x){
    int n = sizeof(arr);
    first = 0;
    last = n - 1;
    middle = (first + last) /2;
    while(first <= last){
        if(arr[middle] < x){
            first = middle + 1;
        }
        else if(arr[middle] == x){
            present = true;
            return middle;
            break;
        }
        else{
            last = middle -1;
        }
        middle = (first+last)/2;
    }
    if(first > last){
        present = false;
        return 0;
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
    int output =  b.search(Array,num);
    if(b.present == 1){
        cout << "Found at index: " << output;
    }
    else{
        cout << "Not Found";
    }
}
