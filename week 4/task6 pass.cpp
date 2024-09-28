#include<iostream>
using namespace std;
void pass(int sc)
{
if(sc>50)
cout<<"you are pass ";
if(sc<50)
cout<<"you are fail ";
}
int main()
{
int score;
cout<<"enter your test score ";
cin>>score;
pass(score);

}