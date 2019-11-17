#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    int temp, d, count=0, num1 = n, m = 0, arr[11]={0};

    while(num1!=0){
        num1=num1/10;
        m++;
    }
    num1 = n;
    for(int i=0; i<m; i++){

        temp = num1%10;
        num1 = num1/10;
        if(temp!=0) d = n%temp;
        if(d==0 && temp!=0 && arr[temp]==0) count++;
        arr[temp]++;
        //cout<<temp<<' '<<d<<' '<<count<<' '<<arr[temp]<<' '<<n<<' '<<num1<<endl;
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
