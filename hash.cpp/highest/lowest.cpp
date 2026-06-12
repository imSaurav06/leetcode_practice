#include<bits/stdc++.h>
using namespace std;

int maxFreq =0;
int element = -1;
unordered_map<int ,int> count_frq(vector<int> &n){
    unordered_map<int, int> count;
    int ans = 0;
    int m = n.size();

    for(int i=0; i<m; i++){
        count[n[i]]++;

      if (count[n[i]] > maxFreq) {
        maxFreq = count[n[i]];
        element = n[i];
    }

    };

    cout<<element<<"---"<<maxFreq<<"\n";


return count;

};


int main(){
    vector<int> n(0);

   n.push_back(2);
   n.push_back(2);
   n.push_back(2);
   n.push_back(3);
   n.push_back(3);
   n.push_back(2);
   n.push_back(1);
   n.push_back(1);
   n.push_back(5);
   n.push_back(2);

   unordered_map<int, int> freq = count_frq(n);

   for(auto x : freq){
    cout << x.first<<"--->"<<x.second<<endl;
   };

   return 0;

}