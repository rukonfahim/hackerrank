#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i, flag, j;
    cin>>t;
    while(t--){
        flag = 0;
        cin>>n;
        int arr[n];
        for(i=1; i<=n; i++){
            cin>>arr[i];
            j = abs(arr[i]-i);
            if(j>2){
                cout<<"Too chaotic"<<endl;
                flag = -99;
                break;
            }
            else if(j == 1) flag++;
            else if(j == 2) flag+=2;
        }
        if(flag!=-99) cout<<flag<<endl;
    }
    cin>>j>>i>>n;
}
