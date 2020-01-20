#include<iostream>
using namespace  std;
void sub(char *a, int pos1, int pos2){
    char sub[20];
    int i,j;
    for(i=pos1,j=0;i<=pos2;i++,j++){
       sub[j] = a[i];
    } // Getting the substring
    cout << sub;
}
int main(){
  char a[20] = "owais";
  sub(a,1,3);
}
