#include<iostream>
using namespace std;
string titlecheck(int age,char gender)
{
    if(age>=16 && gender=='m')
    {
        return "Mr.";
    }
    else  if(age<16 && gender=='m')
    {
        return "Master";
    }
    else  if(age>=16 && gender=='f')
    {
        return "Ms.";
    }
    else  if(age<16 && gender=='f')
    {
        return "Miss";
    }
}
int main()
{
    int age;
    char gender;
    cout<<"enter your age ";
    cin>>age;
    cout<<"enter your gender(m/f) ";
    cin>>gender;
    cout<<"your personal title is "<<titlecheck( age, gender);
}



