
#include<bits/stdc++.h>
using namespace std;

vector<int> movezero(vector<int>&arr){
    vector<int> temp;
    int n = arr.size();

     for(int i=0; i<n; i++){

        if(arr[i] != 0){ temp.push_back(arr[i]);}
        

     };
      for(int j=0; j<n; j++){
        
        if(arr[j] == 0) {temp.push_back(arr[j]);}
       

     }


    return temp;

   
};

int main(){

    vector<int>m;
    m.push_back(1);
    m.push_back(0);
    m.push_back(0);
    m.push_back(2);
    m.push_back(3);
    m.push_back(0);
    m.push_back(0);
    m.push_back(4);
   
   
    


for(auto x : m){
    cout<<x<<' ';
}

cout<<'\n';

vector<int> result = movezero(m);

  for(auto x : result){
    cout<<x<<' ';
}

 return 0;
}