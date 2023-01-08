#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n =0, even =2,odd=1;
    cin>>n;

    if(n==1){
        cout<<1;
        return 0;
    }

    if(n<=3){
        cout<<"NO SOLUTION";
        return 0;
    }

    while(even<=n){
        cout<<even<<" ";
        even+=2;
    }
    while(odd<=n){
        cout<<odd<<" ";
        odd+=2;
    }
    


}
