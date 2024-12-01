#include <iostream>
using namespace std;
char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}};
bool gravity = false;
bool isBlackHole = false; 
void displayWorld()
 {
    for (int i = 0; i < 5; i++)
     {
        for (int j = 0; j < 5; j++) 
        {
            cout << objects[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void setGravityStatus(bool status) {
    gravity = status;
}
void applyGravityOnce() {
    for (int col = 0; col < 5; col++)
     {
        for (int row = 3; row >= 0; row--)
         { 
            if (objects[row][col] == '#') 
            {
                if (objects[row + 1][col] == '-') 
                {
                    objects[row + 1][col] = '#';
                    objects[row][col] = '-';
                } else if (isBlackHole && row + 1 == 4 && objects[row + 1][col] == '#')
                 {
                    objects[row][col] = '-';
                    objects[0][col] = '#';
                }
            }
        }
    }
}
void timeTick(int times) 
{
    if (!gravity) return; 

    for (int t = 0; t < times; ++t) 
    {
        applyGravityOnce();
    }
}
int main() 
{
    cout << "Initial World:\n";
    displayWorld();
    setGravityStatus(true);
    cout << "After 3 Time Ticks with Gravity Enabled:\n";
    timeTick(3);
    displayWorld();
     isBlackHole = true;
    cout << "After 3 More Time Ticks with Black Hole Enabled:\n";
    timeTick(3);
    displayWorld();
}
