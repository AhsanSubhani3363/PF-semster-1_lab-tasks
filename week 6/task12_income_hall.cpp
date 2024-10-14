#include<iostream>
using namespace std;
float totalincome(string screen, int rows, int columns)
{
    float seats,income;
    seats=rows*columns;
    if(screen=="Premiere ")
    {
        income=seats*12;
        return income;
 }
 else if(screen=="Normal")
 {
    income=seats*7.5;
        return income;
 }
 else if(screen=="Discount")
 {
    income=seats*5;
        return income;
 }
 }
int main()
{
    int rows,columns;
    string screening;
    cout<<"enter type of screening ";
    cin>>screening;
    cout<<"enter  rows ";
    cin>>rows;
    cout<<"enter columns ";
    cin>>columns;
    cout<<"total income is "<< totalincome( screening,  rows,  columns);

}