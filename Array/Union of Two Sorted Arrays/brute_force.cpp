#include<bits/stdc++.h>
using namespace std;
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

vector<int> result = Union(ar1 ,ar2);

  for(auto x : result){
    cout<<x<<' ';
}

 return 0;
}