#include<bits/stdc++.h>
using namespace std;



int largest(vector<int> &vec){
    sort(vec.begin(), vec.end(), greater<int>());

    return vec[1];

}

int main(){

    vector<int>m;
    m.push_back(12);
    m.push_back(34);
    m.push_back(54);
    m.push_back(23);
    m.push_back(1);
    m.push_back(2);


for(auto x : m){
    cout<<x<<' ';
}
cout<<'\n';

 int ans = largest(m);

 cout<<ans;
 return 0;
}