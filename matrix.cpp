  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <string>
  #include <iostream>
  using namespace std;
  int main()
  {
    int n,i,l,o;
    int x,b,c,d;
    int j,k;
    int temp1,temp2;
    char s[10][10];
    int t[10][10];
    std::string a;
    scanf("%d",&n);//n=1
    for(o=1;o<=n;o++)
    {
      scanf("%d",&i);//讀矩陣邊長(4)
        for(j=0;j<i;j++){
        for(k=0;k<i;k++){
        
        //s=t[j][k]+'0';
        scanf(" %c",&s[j][k]);//讀矩陣整數(元素)1234,忽略前面的空白字元
        t[j][k]=s[j][k]-'0';
        }
        scanf("\n");
      }
        /*for(j=0;j<i;j++){
        for(k=0;k<i;k++){
          printf("%d",t[j][k]);       
        }
        printf("\n");
      }*/
        scanf("%d",&l);
        while(l--){
          cin>>a;
          if(a=="transpose")
          {
            for(j=0;j<i;j++){
              for(k=0;k<j;k++){
                  temp1=t[j][k];
                  t[j][k]=t[k][j];
                  t[k][j]=temp1;
              }
          }
      }
      else if(a=="row"){
        scanf("%d%d",&x,&b);
        --x;
        --b;
        for(int k=0;k<i;k++){
          temp1=t[x][k];
          t[x][k]=t[b][k];
          t[b][k]=temp1;
        }
      }
      else if(a=="col"){
        scanf("%d%d",&c,&d);
        --c;
        --d;
        for(int j=0;j<i;j++){
          temp2=t[j][c];
          t[j][c]=t[j][d];
          t[j][d]=temp2;
        }
      }
      else if(a=="dec"){
        for(int j=0;j<i;j++){
          for(int k=0;k<i;k++){
            t[j][k]-=1;
            if(t[j][k]<0)
              t[j][k]=(t[j][k]+10)%10;
            else{
              t[j][k]%=10;
            }
        }
        }
      }
      else if(a=="inc"){
        for(int j=0;j<i;j++)
        for(int k=0;k<i;k++)
          t[j][k]+=1;
      }
  }
      printf("Case #%d\n",o);
      for(int j=0;j<i;j++){
          for(int k=0;k<i;k++){
            printf("%d",t[j][k]);
          }
          printf("\n");
        }
        printf("\n");
    }
  }
