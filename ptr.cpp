#include <bits/stdc++.h>
using namespace std;
int main(){
  int b=600;
  int &c=b;//c is b's another name,c must be initialized
  int *d;
  d=&c;
  cout<<"b="<<c<<endl;
  cout<<"b="<<*d<<endl;
}