#include<iostream>
using namespace std;

int main() {
    int row;
    char ch='A';
    cout << "Enter the no. fo row :";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++) 
        {
            cout << ch<<" ";  
            ch++; 

        }
        cout << endl;
    }
    return 0;
}