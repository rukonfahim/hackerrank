#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cout << "gcd(6, 20) = " << __gcd(6, 20) << endl;
    cin>>n>>p;
    int arr[n*n], count = 0;
    for(int i=1; i<=n; i++){
        for(int k=1; k<=n; k++){
            if(i==k || k>i) continue;
            else{
                int x = __gcd(k,i);
                count++;
                cout<<"gcd "<<k<<","<<i<<" "<<x<<endl;}
        }
    }cout<<count;
}

