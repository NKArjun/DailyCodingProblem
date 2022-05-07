#include<bits/stdc++.h>
using namespace std;

int countWays(int num,int climbList[],int size){
    int cache[num+1];
    cache[0] = 1;
    for(int i =1;i<=num;i++){
        cache[i] = 0;
        for(int j =0;j<size;j++){
            if((i-climbList[j])>=0){
                cache[i] = cache[i] + cache[i-climbList[j]];
            }
        }
    }
    return cache[num];
}

int main(){
    int num,size;
    cout<<"Enter a number";
    cin>>num;
    cout<<"Enter size of an array";
    cin>>size;
    int climbList[size];
    cout<<"Enter array elements";
    for(int i =0;i<size;i++){
        cin>>climbList[i];
    }
    cout<<countWays(num,climbList,size);
}