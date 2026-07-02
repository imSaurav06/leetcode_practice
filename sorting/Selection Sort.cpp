#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[] ,int n) {

    for(int i=0; i<n; i++){
        int minn=i;
        for(int j=i+1; j<n; j++){
            
            if(arr[j]<arr[minn]){

                minn = j;
                
                
            };
            
        };
        swap(arr[i],arr[minn]);
    };
};
int main(){
    int q;
    cout<<"put--";
    cin>>q;
    int arr[q];
    
    for(int i=0; i<q; i++ ){
        cin>>arr[i];
    };
    selectionSort(arr, q);

    for(int i=0; i<q; i++ ){
        cout<<"-"<<arr[i];
    };


    return 0;
    
}
