

#include <bits/stdc++.h>
using namespace std;

int decimaltoBinary(int n){
    int x[32];  //array to store the binary number

    int i=0;
    while(n>0){
        x[i]=n%2;   //now storing remainder in binary array
        n/=2;
        i++;
    }
    for(int j=i-1;j>=0;j--){        //printing binary array in reverse
        cout<<x[j];
    }
    
}
int main(){

    int n;
    cin>>n;
    decimaltoBinary(n);

return 0;
}
