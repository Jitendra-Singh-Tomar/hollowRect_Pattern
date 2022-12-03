#include<iostream>
using namespace std;
int main()
{
 // program to print a hollow recatgular pattern of *s
 int row, col;
cout << "Enter number of rows:";
cin >> row;
cout << "Enter numer of columns:";
cin >> col;

for(int i=1; i<=row; i++){
    for(int j=1; j<=col; j++){
        if(j==1 || j==col || i==1 || i==row)
        cout << "*";
        else 
        cout <<" ";
    }
    cout <<endl;
}

    return 0;
}