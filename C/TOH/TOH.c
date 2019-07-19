#include <stdio.h>
#include <conio.h>
void TOH(int n,char b,char a,char e){
  if(n>=1){
    TOH(n-1,b,e,a);
    printf("%c to %c\n",b,e );
    TOH(n-1,a,b,e);

  }
}
 int main(int argc, char const *argv[]) {

  TOH(4,'a','c','b');

  return 0;
}
