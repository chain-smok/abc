#include <stdio.h>
#include <string.h>
void main(){
   int n,i,j;                 
   char name[30][10];
   int sex[30];
   int score[30];
   char tname[10];
   int tsex;
   int tscore;
   printf("enter n:");
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%s",name[i]);
      scanf("%d",&sex[i]);   
      scanf("%d",&score[i]);
   }
   for(i=0;i<n;i++)
    for(j=i+1;j<n;j++){
     if(score[i]<score[j]){
       tscore=score[i];
       score[i]=score[j];
       score[j]=tscore;
       strcpy(tname,name[i]);
       strcpy(name[i],name[j]);
       strcpy(name[j],tname);
       tsex=sex[i];
       sex[i]=sex[j];
       sex[j]=tsex;        
     }
    }
    for(i=0;i<n;i++){
      printf("%s -- %2d -- %4d \n",name[i],sex[i],score[i]);
   }







}