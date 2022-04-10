#include <stdio.h>
#include <stdlib.h>
struct stdRec{
   int id;
   char name[20];
   int score;
};
void main(){
   struct stdRec x;
   FILE *myinp;
   myinp=fopen("mystd.txt","rb+");//write and read file
   if(!myinp){
     printf("ERR");
     exit(1);
   }
   printf("Enter student id[1-100] or 0 to exit:");
   scanf("%d",&x.id);
   while(x.id!=0){
      fseek(myinp,(x.id-1)*sizeof(struct stdRec),SEEK_SET);
      fread(&x,sizeof(struct stdRec),1,myinp);
      if(x.id==0){
       printf("Record not found\n");
      }
      else
        printf("id:%3d name:%s score:%3d\n",x.id,x.name,x.score);
      printf("Enter student id:");
      scanf("%d",&x.id);
   }
      fclose(myinp);
}