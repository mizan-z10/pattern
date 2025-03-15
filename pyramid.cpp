// pyramid patter
//     1
//    121
//   12321
//  1234321
// 123454321
#include<iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter the number of row : ";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        // for space 
        for (int j = 0; j < row-i-1; j++)
        {
            cout << " ";
        }
        // for left number
        for (int  j = 0; j < i+1; j++)
        {
            cout<<j+1;
        }
        // for right number
        for (int j = i; j > 0 ; j--)
        {
            cout <<j;
        }

        cout<<endl;
        
    }
    
    return 0;
}