#include<bits/stdc++.h>
using namespace std;

auto Union(vector<int>&arr1,vector<int>arr2){
  set<int>st;
  int n = arr1.size()
  int m = arr1.size()
  for(int i=0; i<max(m,n); i++){
    st.insert(arr1[i]);
    st.insert(arr2[i]);
  }

  return st;
}
int main(){

    vector<int>ar1;
    vector<int>ar2;
    ar1.push_back(1);
    ar1.push_back(2);
    ar1.push_back(3);
    ar1.push_back(4);
    ar1.push_back(5);
    ar2.push_back(1);
    ar2.push_back(2);
    ar2.push_back(4);
    ar2.push_back(4);
    ar2.push_back(5);
    ar2.push_back(6);
   
   
    


 for (auto [x, y] : ::zip(ar1, ar2)) {
        cout << x << ' ' << y << '\n';
 }

cout<<'\n';

set<int> result = Union(ar1 ,ar2);

  for(auto x : result){
    cout<<x<<' ';
}

 return 0;
}