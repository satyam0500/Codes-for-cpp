// n=4
// 0
// 1
// 1
// 2

#include <bits/stdc++.h>
using namespace std;

void fib(int x)
{
    int t1 = 0, t2 = 1, nextterm;
    for (int i = 1; i <= x; i++)
    {
        cout << t1 << endl;
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
    return;
}
int main()
{

    int n;
    cin >> n;
    fib(n);
    return 0;
}
