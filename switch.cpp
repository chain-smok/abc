#include <bits/stdc++.h>
using namespace std;
class mySwitch{
   public://非成員可呼叫<-->private
   //Data member=attribute(in java)=states
   int IsOn=0;
   int lightLevel=0;
   //member function=method(in java)=behavior=action
   void setOn(){
     IsOn=1;
   };
   void Setoff(){
     IsOn=0;
   };
   void show(){
      if(IsOn)printf("switch is on.\n");
      else
       printf("switch is off\n");
   };
   void inclev(){
      lightLevel++;
   };
    void declev(){
      lightLevel--;
   };
   void setlitlev(int L){
     lightLevel=L;
   };
   int getLightLevel(){
     return lightLevel;
   };
};
int main()
{
  mySwitch s1,s2;//instance of object
  s1.show();
  printf("light level is %d\n",s1.getLightLevel());
  s1.setOn();
  s1.show();
  s2.show();
  s1.inclev();
  s1.inclev();
  s1.declev();
  s1.inclev();
  printf("light level is %d\n",s1.getLightLevel());
  
  }
