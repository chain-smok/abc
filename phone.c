#include <stdio.h>
#include <stdlib.h>
struct stdRec{
  char ID[5];
  char name[20];
  int score;
};
int main(){
   struct stdRec x;
   int n,i;
   FILE *myinput;
   myinput=fopen("mydata.txt","w");
   if(!myinput){
      printf("Error:Cannot open file\n");
      exit(1);
   }
     printf("How many records do you want to input?");
     scanf("%d",&n);
     for(i=0;i<n;i++){
       scanf("%s",x.ID);
       scanf("%s",x.name);
       scanf("%d",&x.score);
       fprintf(myinput,"%s %s %d\n",x.ID,x.name,x.score);}
     fclose(myinput);
}