#include<bits/stdc++.h>
using namespace std;

bool ShortOrnot(vector<int>&arr){
    bool res = false;
    int q = 0;
    while( q <arr.size()){
        if(arr[q] < arr[q+1]){
            res = true;
            q++;
        }
        else return false;
    };

    return res;

    
};

int main(){
    vector<int>vec;
    int q = 6;
   while(q--){
    int n;
    cin >> n;
    vec.push_back(n);
   }

   bool result = ShortOrnot(vec);
   if(result == false){
    cout<<"not sorted";
   }
   else{ cout<<"sorted";}

}