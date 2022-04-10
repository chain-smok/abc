#include <stdio.h>
#include <stdlib.h>
union BBB{
    char c[4];
    int d;

};
void main(){
  union BBB x;
  x.c[0]='d';
  x.c[1]='c';
  x.c[2]='b';
  x.c[3]='a';
  //x.d=24930;
  //x.d=0x61626364;
  printf("c[0]=%c and c[1]=%c and c[2]=%c and c[3]=%c\n",x.c[0],x.c[1],x.c[2],x.c[3]);   
  printf("d=%d \n",x.d);              
}