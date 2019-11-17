#include<bits/stdc++.h>>
//      https://medium.com/@carlosbf/sherlock-and-the-valid-string-solution-8611ecc9e0d5
using namespace std;
int main(){
    /*string str ("Test string");
    int index = 0;
    auto it;
    for (it = str.begin(); it < str.end(); ++it)
    cout << index++ << *it;
    */
    int arr[26] = {}, x, t = 0, c = 0;
    std::string s("teststring");
    int index = 0;
    std::string::iterator it = s.begin();
    string::iterator et = s.end()-1;
    //cout<<(s.end();
    while(it!=et){
        //std::cout << "index is: " <<""<< std::distance(s.begin(), it) << std::endl;
        //cout << index << *it<<endl;
        it++;
        x = int(*it)-97;
        cout<<x<<" "<<*it<<" "<<t<<endl;
        arr[x]++;
        //cout<<(sizeof(arr)/sizeof(*arr))<<endl;
        //index++;
    }

    for(int i=0; i<26; i++){
        cout<<arr[i]<<" "<<char(i+97)<<endl;
    }

    int max_occur =-1;
    bool removed_char = false;
    for(int i =0; i < 26; i++){
        if(occur[i] == 0){
            continue;
        }else if(max_occur == -1){
            max_occur = occur[i];
            continue;
        }else if(occur[i] == max_occur){
            continue;
        }else if(!removed_char && (occur[i] == max_occur + 1 || occur[i] == 1)){
            removed_char = !removed_char;
            continue;
        }else{
            return "NO";
        }
    }

    return "YES";
}
