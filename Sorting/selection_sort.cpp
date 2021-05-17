//Find the minimum element and swap the element with the 1st element
//2 Loops will run 
// one from i=0 to n-1 
//second one from j=i+1 to j=n

//time complexity==  O(n^2)

#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;



return 0;
}
