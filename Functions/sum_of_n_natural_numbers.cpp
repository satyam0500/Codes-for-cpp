

#include <bits/stdc++.h>
using namespace std;

int sum(int x){
    int s=0;
    for(int i=1;i<=x;i++){
        s+=i;
    }
    return s;
}
int main(){

    int n;
    cin>>n;
    cout<<sum(n);
    
return 0;
}
