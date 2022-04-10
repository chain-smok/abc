#include <stdio.h>
#include <string.h>
struct Student_Rec{
   char name[10];
   int sex;
   int score;
};
void main(){
   int n,i,j;                 
   struct Student_Rec std[30];
   struct Student_Rec tstd;
   printf("enter n:");
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%s",std[i].name);
      scanf("%d",&std[i].sex);   
      scanf("%d",&std[i].score);
   }
   for(i=0;i<n;i++)
    for(j=i+1;j<n;j++){
     if(std[i].score<std[j].score){
       tstd=std[i];
       std[i]=std[j];
       std[j]=tstd;
     }
    }
    for(i=0;i<n;i++){
      printf("%s -- %2d -- %4d \n",std[i].name,std[i].sex,std[i].score);
   }







}