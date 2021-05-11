//If you cube each digit of a number and sum it and if it gives the
//same no than the no is a armstrong no

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, sum = 0;
    cin >> n;
    int x = n; //This is important as further n will become 0 hence store here

    while (n > 0)
    {
        int rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }
    if (x == sum)
    {
        cout << "Armstrong no" << endl;
    }
    else
    {
        cout << "Not a armstrong no";
    }

    return 0;
}
