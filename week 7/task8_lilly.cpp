#include<iostream>
using namespace std;
int calculatemoney(int age,int washing_machine,int toyprice)
{
    int moneysave,toycount, moneygift;
    for(int i=1;i<=age;i++)
    {
        if(i%2==0)
        {
            moneysave=moneysave+(moneygift-1);
            moneygift=moneygift+10;
        }
        else
        {
          toycount++;
        }
    }
    moneysave=moneysave+(toycount*toyprice);
    int difference=moneysave-washing_machine;
    return difference;
}
int main()
{
int age, washing_machinePrice, toyPrice;
    cout<<"enter Lilly's age: ";
    cin >>age;
    cout<<"enter price of washing machine: ";
    cin >>washing_machinePrice;
    cout << "Enter unit price of each toy: ";
    cin >>toyPrice;
    int result = calculatemoney(age, washing_machinePrice, toyPrice);
     if (result >= 0)
     {
        cout << "Yes " << result << endl;
    }
     else
     {
        cout << "No! " << -result << endl;
    }
}