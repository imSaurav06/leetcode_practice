#include<bits/stdc++.h>
using namespace std;

void L_search(int arr[] , int k){

//   int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<6; i++){
        if(arr[i]==k){
            cout<<"index of: "<<k<<" is at "<<i;
            break;
        }
        
    };
};



int main(){
    int arr[6] = {10,20,30,88,50,70};
    int k;
    cout<<"enter: ";
    cin>>k;
    L_search(arr, k);

    return 0;

}