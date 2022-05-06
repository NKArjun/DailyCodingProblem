#include<bits/stdc++.h>
using namespace std;

int countWays(string s){
    int cache[s.size() + 1];
    cache[s.size()] = 1;
    for(int i = s.size()-1;i>=0;i--){
        if(s[i] == '0'){
            cache[i] = 0;
        }else if(i == s.size() -1){
            cache[i] = 1;
        }
        if(stoi(s.substr(i,2)) <=26){
            cache[i] = cache[i+1] + cache[i+2];
        }else {
            cache[i] = cache[i+1];
        }
    }
    return cache[0];
}

int main(){
    string s;
    cout<<"Enter a String";
    cin>>s;
    cout<<countWays(s);
}