#include <bits/stdc++.h>

using namespace std;

int total_diff = 0;

vector<string> split_string(string);

// Complete the minimumBribes function below.
void minimumBribes(vector<int> q,int t) {
    int i=0;
    while(i<t){
        int diff;
        diff = q[i]-i;
        if(diff >2) {cout<<'Too chaotic'<<endl;   break;}
        else if(diff<=2){total_diff += diff;}
        i++;
        cout<<q[i]<<' '<<diff<<' '<<total_diff<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string q_temp_temp;
        getline(cin, q_temp_temp);

        vector<string> q_temp = split_string(q_temp_temp);

        vector<int> q(n);

        for (int i = 0; i < n; i++) {
            int q_item = atoi(q_temp[i].c_str());

            q[i] = q_item;
        }

        minimumBribes(q, t);
    }

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
