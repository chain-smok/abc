#include <bits/stdc++.h>
using namespace std;
int main(){
float tall, weight, bmi;
    cout<<"***�w��ϥΤp�̪�BMI�ȭp���***"<<endl<<endl;
    start:
    cout<<"�п�J�A������(����):";
    cin>>tall;
    cout<<"�п�J�A���魫(����):";
    cin>>weight;
    if(tall<10 || tall>300 || weight<3 || weight>500)
    {
         cout<<"���n�A���F��! �A�O�Ǫ���? �A�J�x�p�ߧګ�A!"<<endl<<endl;
         goto start;           
    }
    bmi=weight/pow(tall/100,2);          //pow(����,����) �B�Φ���ƮɻݩI�scmath
    cout<<"�A��BMI�Ȭ�: "<<bmi<<endl;
    if(bmi<18.5)
    {
         cout<<"�魫�L��!!�A�ݭn�h�Y�I��!"<<endl;            
    }
    if(bmi>=18.5 && bmi<24)
    {
         cout<<"���`�d��!!�~��O��!"<<endl;            
    }
    if(bmi>=24 && bmi<27)
    {
         cout<<"�L��!!��..�Ӵ�ΤF!"<<endl;            
    }
    if(bmi>=27 && bmi<30)
    {
         cout<<"���תέD!!�ӭD�F!�o�n�|�椣��k�B��!"<<endl;            
    }if(bmi>=30 && bmi<35)
    {
         cout<<"���תέD!!�h�޳��]�ӤQ��A�^��!"<<endl;            
    }if(bmi>=35)
    {
         cout<<"���תέD!!�A�ݭn�ߧY�`�N�A������,�]���A���ͩR�������Y���¯�!"<<endl;            
    }
    cout<<endl;
    system("pause");
    return 0;                    
}
