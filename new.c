#include <stdio.h>
int main()
{
int n,i;
while(scanf("%d",&n)!=EOF){
if(n>=10||n<0)break;
for(i=n-1;i>0;i--)
{
n=n*i;
}
printf("%d",n);
}
return 0;   
}