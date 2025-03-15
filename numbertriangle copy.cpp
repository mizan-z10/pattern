#include<iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter the no. fo row :";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = i+1; j > 0; j--) 
        {
            cout << j<<" ";   

        }
        cout << endl;
    }
    return 0;
}