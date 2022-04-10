//a%x=[(b%x)*c+d]%x-->c為不動的數:2,x:131071,d為二進位的每個位數
#include <bits\stdc++.h>
using namespace std;
char buf[10240],tmp[10240];  
int main()
{
  int num,i;
  while(scanf("%s",tmp)!=EOF){
    buf[0]='\0';
    strcat(buf,tmp);
  while(buf[strlen(buf)-1]!='#'){
     scanf("%s",tmp);     
     strcat(buf,tmp);
 }
  buf[strlen(buf)-1]='\0';
  num=0;
 for(i=strlen(buf)-1;i>=0;i--){
    num*=2;
      if(buf[i]=='1')
        num++;
      while(num>=131071)
        num%=131071;
 }
   if(num==0)printf("YES\n");
   else printf("NO\n");
  }
}