#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, p=0, c=0;
    cin>>p;
    char ch;
    for(i=0;i<p;i++){
        cin>>ch;
        if(ch==' '){
            c++;
        }
    }
    cout<<p;
}
