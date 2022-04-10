#include <bits/stdc++.h>
using namespace std;
int w=400;
int rectArea(int h=200){
   return ::w*h;
}
int main()
{
  int w=200,h=300;
  cout<<"Area="<<rectArea()<<endl;
  cout<<"Area="<<rectArea(w)<<endl;

}