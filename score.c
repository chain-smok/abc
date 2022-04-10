#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct std_Rec{
 int score;
 char ID[5];
 char name[20];
 struct std_Rec *L;//L=link
};
void main(){
struct std_Rec *start,*end,*temp,a,b,c,d;
start=&a;
strcpy(a.ID,"s001");
strcpy(a.name,"Mary");
a.score=95;
a.L=&b;
strcpy(b.ID,"s002");
strcpy(b.name,"John");
b.score=85;
b.L=&c;
strcpy(c.ID,"s003");
strcpy(c.name,"Ted");
c.score=75;
c.L=NULL;
//insertion list
strcpy(d.ID,"s004");
strcpy(d.name,"Joe");
d.score=65;
d.L=start->L;
start->L=&d;
for(temp=start;temp!=NULL;temp=(*temp).L){
  printf("%s -- %s -- %3d\n",(*temp).ID,(*temp).name,(*temp).score);
}
}