#include<bits/stdc++.h>
using namespace std;

int main(){
    string check = " ";
long long int count = 1, mx=0;
    cin>> check;
    long long int n = check.size();
    for(int i=0;i<n;i++){
        if(check[i] == check[i+1]){
            count++;

        }else{
            mx = max(count, mx );
            count =1;

        }
        
    }
    mx = max(mx, count);
    cout << mx<<endl;


}

