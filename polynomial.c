#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int n,m,i,j,a[55];
int main(){
    while(scanf("%d",&n)!=EOF){
        memset(a,0,sizeof(a));
        a[0]=1;
        for(i=1;i<=n;i++){
          scanf("%d",&m);
          for(j=i;j>=0;j--){
              a[j+1]+=a[j]*(-m);
          }
        }
        if(n==1)printf("x");
        else{printf("x^%d",n);}
        for(i=1;i<n;i++){
           if(a[i]==0)continue;
           if(a[i]<0)printf("-");
           else{printf("+");}
           if(abs(a[i])!=1)printf("%d",abs(a[i]));
           if(n-i==1)printf("x");
           else printf("x^%d",n-i);
        }
     if(a[n]<0)printf("-");
     else{printf("+");}
     printf("%d =0\n",abs(a[n]));
}
}
