#include <bits/stdc++.h>

using namespace std;

int maximizingXor(int l, int r){
    int p = l ^ r, c = 0;
    while(p){
        c++;
        p>>=1;
    }

    cout<<(pow(2, c) - 1);
    return 0;
}

int main(){
    int l, r, result;
    cin>>l>>r;

    cout<<result<<endl;

    maximizingXor(l, r);

    //cout<<"djsahakdollsdkalsdlpaskdflpkfosdkfldkjlg"<< "\n";

    return 0;
}

