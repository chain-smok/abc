#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
 int n,i;
 char s[1000000];
 int M1,Y1,C1;
 char M,Y,C,R,B,G,V,W;
  while(scanf("%d",&n)!=EOF){
  while(n--){
  scanf("%d%d%d%s",&M1,&Y1,&C1,s);
  for(i=0;i<strlen(s);i++){
    if(s[i]=='M'){M1-=1;}
    if(s[i]=='C'){C1-=1;}
    if(s[i]=='R'){M1-=1;Y1-=1;}
    if(s[i]=='B'){M1-=1;Y1-=1;C1-=1;}
    if(s[i]=='G'){Y1-=1;C1-=1;}
    if(s[i]=='Y'){Y1-=1;}
    if(s[i]=='V'){M1-=1;C1-=1;}
    if(s[i]=='W'){M1=M1;C1=C1;Y1=Y1;}
  }
  if(M1<0||Y1<0||C1<0)printf("NO\n");
  else{
    printf("YES %d %d %d\n",M1,Y1,C1);
  }    
}







  }

}