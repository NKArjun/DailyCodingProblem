#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of an array";
    cin>>size;
    int arr[size];
    cout<<"Enter Array Elements";
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    int prefix_products[size],suffix_products[size];
    prefix_products[0] = arr[0];
    for(int i =1;i<size;i++){
        prefix_products[i] = prefix_products[i-1] * arr[i];
    }
    suffix_products[size-1] = arr[size-1];
    for(int i=size-2;i>=0;i--){
        suffix_products[i] = suffix_products[i+1] * arr[i];
    }
    for(int i =0;i<size;i++){
        if(i == 0)
            cout<<suffix_products[i+1]<<" ";
        else if(i == size-1)
            cout<<prefix_products[i-1]<<" ";
        else
            cout<<prefix_products[i-1] * suffix_products[i+1]<<" ";
    }
}