#include <iostream>
using namespace std;
void replace(char *a, char b[], int c){
  char peserve[20];
  int r,i,j;
  for(int i=c;i<20;i++){
      a[i] = a[i+1];
  } // Removing the element at index c
  for(j=0,i=c;i<20;i++,j++){
    peserve[j] = a[i];
    if(a[i] == '\0')
    break;
  } // Removing elements after the index c
  for(i=0,r=c;r<20;r++,i++){
    if(b[i] != '\0'){
      a[r] = b[i];
    }
    else
    break;
  } // Adding the substring at the index c
  int k,f;
  for(k=0,f=r;k<20;k++,f++){
    if(peserve[k] != '\0'){
      a[f] = peserve[k];
    }
    else 
    break;
  } // Getting final result
  cout << a;
}
int main() {
  char str[20] = "owais";
  char str2[20] = "meraj";
  replace(str,str2,1);
}
