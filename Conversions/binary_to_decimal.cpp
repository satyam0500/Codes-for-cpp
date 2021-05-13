// n=101
// 5

#include <bits/stdc++.h>
using namespace std;

int binarytoDecimal(int n){
    int rem,i=0,x=0;
    while(n>0){
        rem=n%10;
        x=x+rem*pow(2,i);
        i++;
        n=n/10;
    }
    return x;
}

int main(){

int n;
cin>>n;
cout<<binarytoDecimal(n)<<endl;

return 0;
}
