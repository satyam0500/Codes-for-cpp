//Rows= 1 to n
//Coloumns==
// it will have 2 loops

// 5
//     *****
//    *****
//   *****
//  *****
// *****

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}