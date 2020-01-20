#include<iostream>
using namespace  std;
void remove(char *a, int pos1, int pos2){
    char safe[20];
    int i,j;
    for(i=pos2+1,j=0;i<sizeof(a);i++,j++){
       safe[j] = a[i];
    } // Securing the string after pos2
    for(i=pos1;i<sizeof(a);i++){
      a[i] = '\0';
    } // Removing all the elements after the pos1
    for(i=pos1,j=0;j<sizeof(a);j++,i++){
      a[i] = safe[j];
    } // Getting the final result
    cout << a;

}
int main(){
  char a[20] = "owais";
  remove(a,1,3);
}
