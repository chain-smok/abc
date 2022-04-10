#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct stdRec{
    char ID[5];
    char name[20];
    int score;
    struct stdRec *L;
};
void main(){
       int n,i;
       struct stdRec *start,*end,*temp;
       printf("How many records you want to enter?");
       scanf("%d",&n);
       for(i=0;i<n;i++){
           temp=malloc(sizeof(struct stdRec));
           scanf("%s",temp->ID);
           scanf("%s",temp->name);
           scanf("%d",&temp->score);
           temp->L=NULL;
           if(i==0){
             start=end=temp;
           }
           else{
             (*end).L=temp;
             end=temp;                  
           }
       }
       for(temp=start;temp!=NULL;temp=(*temp).L){
            printf("%s -- %s -- %3d\n",(*temp).ID,(*temp).name,(*temp).score);               
       }
}