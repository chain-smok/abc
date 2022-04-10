#include <stdio.h>
enum mydays{
  Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};                  
char *dayname[]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
void main(){
  enum mydays day;
  for(day=Monday;day<=Sunday;day++){
      printf("day is %s\n",dayname[day]);
  }
}