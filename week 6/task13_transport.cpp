#include <iostream>
using namespace std;
float calculate_cheapest_transport(int n, string time)
 {
    float taxi_fee = 0.70, taxirate_per_km,taxi_price;
 if (time == "day")
  {
        taxirate_per_km = 0.79;
        taxi_price = taxi_fee + (taxirate_per_km * n);
        return taxi_price;
 } 
    else 
    {  
        taxirate_per_km = 0.90;
        taxi_price = taxi_fee + (taxirate_per_km * n);
        return taxi_price;
     }
 
if (n >= 100) 
{
        float train_price = 0.06 * n;
        return train_price;  
    }
 if (n >= 20) 
 {
        float bus_price = 0.09 * n;
        return bus_price;  
    }

}

int main() 
{
    int n;
    string time_of_day;
    cout<<"Enter the number of kilometers: ";
    cin>>n;
    cout<<"Enter the period of the day (day or night): ";
    cin>>time_of_day;
float cheapest_price = calculate_cheapest_transport(n, time_of_day);
cout<<"The cheapest transport price is: "<<cheapest_price  << endl;
}
