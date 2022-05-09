#include<bits/stdc++.h>
using namespace std;

int findMaximumRooms(int time[][2],int size){
    int prefix[100001] = {0};
    for(int i =0;i<size;i++){
        prefix[time[i][0]]++;
        prefix[time[i][1] + 1]--;
    }
    int ans = prefix[0];
    for(int i =1;i<100001;i++){
        prefix[i] = prefix[i] + prefix[i-1];
        ans = max(prefix[i],ans);
    }
    return ans;
}

int main(){
    int size;
    cout<<"Enter size of an array";
    cin>>size;
    cout<<"Enter pair of array element";
    int time[size][2];
    for(int i =0;i<size;i++){
        cin>>time[i][0]>>time[i][1];
    }
    cout<<findMaximumRooms(time,size);
}