//Rows ranging from== 1to n;
//Columns = 1 to rown no
// row no + col no==even no =print 1
//else print 0
// n=5
//  1
//  0 1
//  1 0 1
//  0 1 0 1
//  1 0 1 0 1
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << " 1";
            }
            else
            {
                cout << " 0";
            }
        }
        cout << endl;
    }
    return 0;
}