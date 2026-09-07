#include<iostream>
#include <cctype> 
using namespace std;
float temp_conversion(int temp,char unit)
{   
    unit=tolower(unit);
    if (unit=='c')
    {
        return temp *9.0/5.0 + 32;
    }
    else if(unit =='f')
    {
        return (temp - 32)*5.0/9.0;
    }
    else{
        return -1;
    }
}
int main()
{
    char unit; int temp;
    cout<<"enter temp "<<endl;
    cin>>temp;
    cout<<"enter unit"<<endl;
    cin>>unit;
    
   float converted_temp=temp_conversion(temp,unit);
 if (converted_temp==-1)
 {
     cout<<"invalid argument";
 }
 else
 {
     cout<<"converted temperature: "<<converted_temp;
 }
 return 0;
}