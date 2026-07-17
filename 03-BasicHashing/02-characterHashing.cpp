//  Character hashing using arrays
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ="AbabahAhnnm";
    int hash[256]={0};
    for(int i =0; i<s.size(); i++){
        hash[s[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        cout << hash[c] << endl;
    }
    return 0;
}


//  Character hashing using map/unordered map
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s= "uhisuggffui";
    unordered_map<char,int> mpp;
    for(int i =0; i<s.size(); i++){
        mpp[s[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        cout << mpp[c] << endl;
    }
    return 0;
}