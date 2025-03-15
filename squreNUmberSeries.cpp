#include<iostream>
using namespace std;

int main() {
    int row,num=1;
    cout << "Enter the no. fo row :";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout <<num<<" ";   
            num++;

        }
        cout << endl;
    }
    return 0;
}