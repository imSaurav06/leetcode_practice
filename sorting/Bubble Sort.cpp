#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int>arr, int n) {

    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(arr[j]<arr[j+1])  //descending 
           //  if(arr[j]>arr[j+1])  //ascending 
            {
                swap(arr[j],arr[j+1]);
            }
        }
        
    };
  for(auto x : arr ){
        cout<<"-"<<x;
    };
    
};


int main(){
   vector<int>arr = {13, 46, 24, 52, 20, 9};
    int nn = arr.size();
    for(int i=0; i<nn; i++ ){
        cout<<"-"<<arr[i];
    };
    cout<<'\n';

    BubbleSort(arr, nn);

  


    return 0;
    
}
