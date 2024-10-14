#include <iostream>
using namespace std;
bool parityanalysis(int number)
{
    int digit_1=number/100;
    int digit_3=number%10;
    int digit_2=(number/10)%10;
    int sum=digit_1+digit_2+digit_3;
    if(number%2==0 && sum%2==0)
    {
        return true;
    }
    else if(number%2!=0 && sum%2!=0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int number;
    cout<<"enter three digit number ";
    cin>>number;
    cout<<parityanalysis( number);
}