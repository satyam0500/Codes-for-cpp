//  n=5
//  *  *  *  *  *
//  *  *  *  *
//  *  *  *
//  *  *
//  *

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) // Loop running from n to 1
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}