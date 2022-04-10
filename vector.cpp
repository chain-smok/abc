#include <bits/stdc++.h>
using namespace std;


int main()
{
 vector<int>a;
 int i;
 a.assign(3,100);
 a.push_back(200);
 for(i=0;i<a.size();i++)
 {
    cout<<a[i]<<endl;
 }
 a.pop_back();
 a.insert(a.begin(),50);
}