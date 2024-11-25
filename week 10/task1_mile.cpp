#include <iostream>
using namespace std;
int countProgressDays(int miles[], int size) 
{
    int progressDays = 0;
    for (int i = 1; i < size; i++)
     {
        if (miles[i] > miles[i - 1])
        {
            progressDays++;
        }
    }
      return progressDays;
}
int main()
 {
    int n;
    cout << "enter the number of Saturdays: ";
    cin >> n;
    if (n <= 1) 
    {
        cout << "you need at least 2 Saturdays to calculate progress days!" << endl;
        return 1;
    }
     int miles[n];
      cout << "enter the miles run for each Saturday: " << endl;
    for (int i = 0; i < n; i++)
     {
        cin >> miles[i];
    }
    int progressDays = countProgressDays(miles, n);
    cout << "Total progress days: " << progressDays << endl;
 }
    
