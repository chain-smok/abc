#include <stdio.h>
#include <stdlib.h>
struct stdRec{
  char ID[5];
  char name[20];
  int score;
};
void main(){
   struct stdRec x;
   int n,i;
   FILE *myinput;
   myinput=fopen("mydata.txt","r");
   if(!myinput){
     printf("Error:Cannot open file\n");
     exit(1);
   }
   while(!feof(myinput)){
    fscanf(myinput,"%s %s %d",x.ID,x.name,&x.score);
    printf("%s %s %d\n",x.ID,x.name,x.score);
   }
   fclose(myinput);
}