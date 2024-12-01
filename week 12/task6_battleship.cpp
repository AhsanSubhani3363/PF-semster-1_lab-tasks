#include<iostream>
using namespace std;
string firetopedo(char board[5][5],string coordinates)
{
    int row=coordinates[1]-'1';
    int col=coordinates[0]-'A';
    if(board[row][col]=='.')
    {
        return "boom";
    }
    else if(board[row][col]=='#')
    {
        return "splash";
    }
    else return " invalid coordinate ";
}
int main()
{
    char board[5][5]={{'.','#','.','#','.'},
                                  {'.','.','.','#','.'}, 
                                  {'.','#','#','#','.'},
                                  {'#','.','.','#','.'},
                                  {'.','#','#','.','.'}};
    string coordinates;
    cout<<"enter coordinates ";
    cin>>coordinates;
    cout<<firetopedo(board,coordinates);
}