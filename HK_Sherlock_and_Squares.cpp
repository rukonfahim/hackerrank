#include<bits/stdc++.h>
int c = 0;
int squares(int a, int b) {
    int c = 0;
    for(int i = sqrt(a); i<=sqrt(b); i++){
            if(i*i>=a && i*i<=b){
                c++;
            }
    }
    return c;
}
int main(){
    int z = squares(3,9);
}

