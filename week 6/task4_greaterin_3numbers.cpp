#include<iostream>
using namespace std;
int findgreater(int num_1,int num_2,int num_3)
{
    if(num_1>num_2 && num_1>num_3)
    {
        return num_1;
    }
    else if(num_2>num_1 && num_2>num_3)
    {
        return num_2;
    }
    else
    return num_3;
}
int main()
{
    float number1,number2,number3;
    cout<<"enter first number ";
    cin>>number1;
    cout<<"enter second  number ";
    cin>>number2;
    cout<<"enter third number ";
    cin>>number3;
    cout<<"the greater number in "<<number1<<", "<<number2<<"and "<<number3<<"is "<<findgreater( number1, number2, number3);
}