#include <bits/stdc++.h>
using namespace std;
int main()
{
  int m,n;
  string s;
  cin>>m>>n;
  map<string,int>hay;
  while(m--)
  {
    int p;
    cin>>s>>p;
    hay[s]=p;
  }
    while(n--)
  {
     int ans=0;
     while(cin>>s&&s!="."){
     ans+=hay[s];}
     cout<<ans<<endl;
  }




}