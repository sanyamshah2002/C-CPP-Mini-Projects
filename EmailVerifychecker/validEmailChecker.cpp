#include<iostream>
#include<regex>
using namespace std;
bool is_validEmail(string email)
{
    regex pattern(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$)");
    return regex_match(email,pattern);
}

int main()
{
    string email;
    cout<<"enter email address :";
    cin>>email;
    if(is_validEmail(email))
    {
        cout<<"valid email address";
    
        
    }
    else{
        cout<<"invalid email address";
    }


}