#include <iostream>
using namespace std;

int main()
{
    int row = 4;
    for (int i = 0; i < row; i++)
    {
        // spaces
        for (int j = 0; j < row - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";

        // spaces

        if (i != 0)
        {

            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
    
    cout<<endl;
    }

    for (int i = 0; i < row-1; i++)
    {
        // spaces
        for (int j = 0; j < i+ 1; j++)
        {
            cout << " ";
        }
        cout << "*";

        // spaces

        if (i != row-2)
        {

            for (int j = 0; j < 2 *(row-i)-5; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
    
    cout<<endl;
    }
    return 0;
}