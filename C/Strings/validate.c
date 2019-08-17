#include<stdio.h>

int valid(char *name){
  int i;
  for(i=0;name[i]!='\0';i++){
    if(!(name[i]>=65&&name[i]<=90))
    return 0;
  }
  return 1;
}

void main()
{
  char *name="Sai1321";
  if(valid(name)){
    printf("Y\n");
  }
  else
  printf("N\n");
}
