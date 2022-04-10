#include <stdio.h>
#include <stdlib.h>
struct stdRec{
  int id;
  char name[20];
  int score;
};
int main()
{
    int i;
    struct stdRec x={0,"",-1};
    /*struct stdRec a;
    a.id=0;
    strcpy(a.name,"");
    a.score=-1;*/
    FILE *myinp;
    myinp=fopen("mystd.txt","wb");//clean file
    if(!myinp){
       printf("Err:can't open file");
       exit(1);
    }
   for(i=1;i<=100;i++){
      fwrite(&x,sizeof(struct stdRec),1,myinp);
   }
   fclose(myinp);
}