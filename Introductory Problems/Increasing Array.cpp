#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n =0, sol =0;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            sol+= arr[i-1]-arr[i];
            arr[i] = arr[i-1];

        }
    }
    cout<<sol<<endl;
}
