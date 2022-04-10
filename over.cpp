#include <bits/stdc++.h>
using namespace std;
int abc(int x,int y){
 return x+y;
}
float abc(float x,int y/*signature*/){
  return x+y;
}
int main()
{
 int a=100,b=200;
 float c=30.25,d=20.25;
 printf("total=%d\n",abc(a,b));
 printf("total=%f",abc(c,d));
}