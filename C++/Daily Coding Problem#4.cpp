#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of an array";
    cin>>size;
    int a[size];
    cout<<"Enter array elements";
    for(int i =0;i<size;i++){
        cin>>a[i];
    }
    for(int i =0;i<size;i++){
        while(a[i]>= 1 && a[i]<=size && (i+1) != a[i]){
            int temp = a[a[i] - 1];
            a[a[i] - 1] = a[i];
            a[i] = temp; 
        }
    }
    for(int i =0;i<size;i++){
        if(a[i] != i+1){
            cout<<i+1;
            break;
        }
    }
}