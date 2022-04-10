#include <bits/stdc++.h>
using namespace std;
int main(){
float tall, weight, bmi;
    cout<<"***歡迎使用小米的BMI值計算機***"<<endl<<endl;
    start:
    cout<<"請輸入你的身高(公分):";
    cin>>tall;
    cout<<"請輸入你的體重(公斤):";
    cin>>weight;
    if(tall<10 || tall>300 || weight<3 || weight>500)
    {
         cout<<"不要再玩了啦! 你是怪物嗎? 再胡鬧小心我扁你!"<<endl<<endl;
         goto start;           
    }
    bmi=weight/pow(tall/100,2);          //pow(底數,指數) 運用此函數時需呼叫cmath
    cout<<"你的BMI值為: "<<bmi<<endl;
    if(bmi<18.5)
    {
         cout<<"體重過輕!!你需要多吃點喔!"<<endl;            
    }
    if(bmi>=18.5 && bmi<24)
    {
         cout<<"正常範圍!!繼續保持!"<<endl;            
    }
    if(bmi>=24 && bmi<27)
    {
         cout<<"過重!!唔..該減肥了!"<<endl;            
    }
    if(bmi>=27 && bmi<30)
    {
         cout<<"輕度肥胖!!太胖了!這要會交不到女朋友!"<<endl;            
    }if(bmi>=30 && bmi<35)
    {
         cout<<"中度肥胖!!去操場跑個十圈再回來!"<<endl;            
    }if(bmi>=35)
    {
         cout<<"重度肥胖!!你需要立即注意你的飲食,因為你的生命正受到嚴重威脅!"<<endl;            
    }
    cout<<endl;
    system("pause");
    return 0;                    
}
