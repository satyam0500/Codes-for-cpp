// n=17
// octal to decimal =1*8^1+7*8^0;
// 15

#include <bits/stdc++.h>
using namespace std;

int OctaltoDecimal(int n){
    int rem,i=0,x=0;
    while(n>0){
        rem=n%10;
        x=x+rem*pow(8,i);
        i++;
        n=n/10;
    }
    return x;
}
int main(){

    int n;
    cin>>n;

    cout<<OctaltoDecimal(n)<<endl;
return 0;
}
