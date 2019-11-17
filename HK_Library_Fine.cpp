#include<bits/stdc++.h>
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    //int mon[] = {00,31,28,31,30,31,30,31,31,30,31,30,31};
    //int fine = abs(d1-d2)*15 + (mon[m1]-mon[m2])*500 + (y1-y2)*10000;


    if(d1 > d2 && m1 == m2 && y1 == y2)fine = 15 * (d1-d2);
    else if(m1 > m2 && y1 == y2)fine = 500 * (m1-m2);
    else if(y1 > y2)fine  = 10000;
    cout << fine << endl;


    return fine;
}
int main(){
    int l = libraryFine(9, 6, 2015, 6, 6, 2015);
    std::cout<<l;
}

