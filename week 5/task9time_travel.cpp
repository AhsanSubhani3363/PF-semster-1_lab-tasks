#include<iostream>
#include<string>
using namespace std;
string timetravel(int  hour_s,int  minute_s)
{
    
    minute_s=minute_s+15;
    if(minute_s>60)
    {
        minute_s=minute_s-60;
        hour_s++;
    }
        if(hour_s>24)
        {
            hour_s=0;
        }
         string future_time = to_string(hour_s);
 if (minute_s < 10)
  
  future_time += ":0" + to_string(minute_s);  
     else
   future_time += ":" + to_string(minute_s);
     return future_time;
 }
int main()
{
    int hours,minutes;
    string Futuretime;
    cout<<"enter hours ";
    cin>>hours;
    cout<<"enter hours ";
    cin>>minutes;
    Futuretime=timetravel(hours,minutes);
    cout<<"final time is "<<Futuretime;

}