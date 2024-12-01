#include<iostream>
using namespace std;
int identicalrows(int matrix[][3],int row)
{
   int count=0;
   for (int  i = 0; i < row; i++)
   {
      for (int j = 1; j < row; j++)
      {
         if(matrix[i][0]==matrix[j][0] && matrix[i][1]==matrix[j][1] && matrix[i][2]==matrix[j][2])
         {
            count++;
         }
      }
   }
   return count;
   
}
int main()
{
    int rows;
    cout<<"enter rows ";
    cin>>rows;
    int matrix[rows][3];
    for (int i = 0; i < rows; i++)
    {
       for (int j= 0; j < 3;j++)
       {
        cout<<"enter element "<<i<<j<<" ";
        cin>>matrix[i][j];
       }
    
     }
      for (int i = 0; i < rows; i++)
    {
       for (int j= 0; j < 3;j++)
       {
        cout<<matrix[i][j]<<" ";
        
       }
    cout<<endl;
     }
   cout<<"total same rows are " <<identicalrows(matrix,rows);
    
}