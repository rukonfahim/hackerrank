#include <bits/stdc++.h>
using namespace std;
int main() {
  int i;
  string s;
  cin >> s;// cout<<s[9]<<endl;

    if (s[8] == 'P' || s[8] == 'p') {
        i = (int)s[0] - 48;//cout << i << endl;
        i = (int)s[1] - 48;//cout << i << endl;

        if (i < 12) {
            i += 12;
            s[0] = (i / 10) + 48;
            s[1] = (i % 10) + 48;
        }
    }

    if (s[8] == 'A' || s[8] == 'a') {
        i = (int)s[0] - 48;//cout << i << endl;
        i = (int)s[1] - 48;//cout << i << endl;

        if (i == 12) {
            s[0] = (0) + 48;
            s[1] = (0) + 48;
        }
    }

    s.resize(8);
    cout << s;
}
