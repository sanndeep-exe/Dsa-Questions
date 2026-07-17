#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    unordered_map<int,int> mpp;
    for(int i =0; i<n; i++){
        mpp[arr[i]]++;
    }
    int max = 0, max_number;
    for(const auto &it : mpp){
        if(max < it.second){
            max = it.second;
            max_number = it.first;
        }
    }
    int min = max, min_number;
    for(const auto &it : mpp){
        if(min > it.second){
            min = it.second;
            min_number = it.first;
        }
    }
    cout << "max number :-" << max <<"-->" << "times:-" << max_number<< endl; 
    cout << "min number :-" << min <<"-->" << "times:-" << min_number<< endl; 
    return 0;
}