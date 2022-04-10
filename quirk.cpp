//輸入位數為k,d=10^(k/2),S=AB=(A+B)^2=d*A+B
#include <bits\stdc++.h>
using namespace std;
void Quirk(int n)
{
  int SIZE=1;
  for(int i=0;i<n/2;i++)
   SIZE=SIZE*10;
  for(int i=0;i<SIZE;i++){
     int Square=i*i;
     if(((Square/SIZE)+(Square%SIZE))==i)
       if(n==2)
         printf("%02d\n",Square);
       else if(n==4)
         printf("%04d\n",Square);
       else if(n==6)
         printf("%06d\n",Square);
       else if(n==8)
         printf("%08d\n",Square);
  }
}
int main()
{
  int n;
  while(scanf("%d",&n)!=EOF){
    Quirk(n);
  }
}