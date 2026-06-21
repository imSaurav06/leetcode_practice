#include<bits/stdc++.h>
using namespace std;

vector<int> rotatebyone(vector<int>&arr){
    int temp = arr[0];

    for(int i=1; i<=arr.size(); i++){
        arr[i-1] = arr[i];
    }
    arr[arr.size()-1] = temp;


    return arr;
}

int main(){

    vector<int>m;
    m.push_back(1);
    m.push_back(2);
    m.push_back(3);
    m.push_back(4);
    m.push_back(5);
    m.push_back(6);
   
    


for(auto x : m){
    cout<<x<<' ';
}

cout<<'\n';

rotatebyone(m);

for(auto x : m){
    cout<<x<<' ';
}

 return 0;
}