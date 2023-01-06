#include<iostream>
using namespace std;
int main(){
    long long int n=0;
    cin>>n;
    if(n==1){
        n = 1;
        cout<<n;
        return 0;
    }
    for(; ;){
        cout<<n<<" ";
        if(n%2==0){
            n=n/2;
        }
        else{
            if(n%2!=0){
                n=n*3+1;     
            }   
        }
        if(n==1){
            cout<<n;
            break;
        }
        
    }

}
