#include<bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int>arr, int n) {

//    function of Insertion sort

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

    InsertionSort(arr, nn);

  


    return 0;
    
}
