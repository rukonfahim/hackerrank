#include<bits/stdc++.h>
using namespace std;
void chocolateFeast(int n, int c, int m) {
    int b, wrap, why;
    b = n/c;
    wrap = b;
    why = b;
    int bb = b;
    while(wrap/m){
        b+=wrap/m;

        bb+=why/m;

        wrap = wrap/m + wrap%m;
        why -= why/m;
        cout<<wrap<<' '<<why<<endl;
        cout<<b<<' '<<bb<<endl;
        cout<<endl<<
        endl;
    }
}

int main(){
    int n;
    scanf("%d", &n);

    chocolateFeast(38,1,4);


}
