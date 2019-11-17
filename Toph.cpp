#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cout << "gcd(6, 20) = " << __gcd(6, 20) << endl;
    cin>>n>>p;
    int arr[n*n], count = 0;
    for(int i=1; i<=n; i++){
        for(int k=1; k<=n; k++){
            if(i==k) continue;
            else{
                int x = __gcd(i,k);
                if(x>4) count++;
                cout<<"gcd "<<i<<","<<k<<" "<<x<<endl;}
        }
    }cout<<count;
}

