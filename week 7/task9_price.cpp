#include <iostream>
using namespace std;

int calculatePrice(int money, int year)
 {
    int currentYear = 1800;
    int age = 18;

    while (currentYear <= year)
     {
        int expenses;
        if (currentYear % 2 == 0)
         {
            expenses = 12000;
        } else
        {
            expenses = 12000 + 50 * age;
        }
        money -= expenses;
        if (money < 0) 
        {
            return money; 
        }
        currentYear++;
        age++;
    }
    return money; 
}
int main() 
{
    int inheritedMoney, targetYear;
    cout << "Enter inherited money: ";
    cin >> inheritedMoney;
    cout << "Enter target year: ";
    cin >> targetYear;

    int result = calculatePrice(inheritedMoney, targetYear);
    
    if (result >= 0) {
        cout << "Yes! He will live a carefree life and will have " << result << " dollars left." << endl;
    } else {
        cout << "He will need " << -result << " dollars to survive." << endl;
    }
}
