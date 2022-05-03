#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,k;
    cin>>size>>k;
    int flag = 0;
    int hash[100000] = {0};
    int arr[size];
    for(int i =0;i<size;i++)
        cin>>arr[i];
    for(int i =0;i<size;i++){
        if(hash[k - arr[i]]){
            flag = 1;
            break;
        }
        hash[arr[i]] = 1;
    }
    if(flag == 1){
        cout<<"True";
    }else {
        cout<<"False";
    }
}