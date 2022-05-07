#include<bits/stdc++.h>
using namespace std;

int findLargestSumArray(int arr[],int size){
    int cache[size+1];
    cache[size-1] = arr[size-1];
    for(int i = size-2;i>=0;i--){
        if(i == size-2){
            cache[i] = arr[i+1] > arr[i] ? arr[i+1] : arr[i];
        }else{
            cache[i] = max((arr[i]+cache[i+2]),cache[i]);
        }
    }
    return cache[0];
}

int main(){
    int size;
    cout<<"Enter size of an array";
    cin>>size;
    int arr[size];
    cout<<"Enter Array Elements";
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    cout<<findLargestSumArray(arr,size);
}