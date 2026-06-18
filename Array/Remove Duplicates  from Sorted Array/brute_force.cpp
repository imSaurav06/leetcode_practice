#include<bits/stdc++.h>
using namespace std;

void removeD(vector<int>& arr) {
    set<int> st;

    for (int x : arr)
        st.insert(x);


    for(auto x : st)
        cout<<x<<' ';

}


vector<int> removeDuplicates(vector<int>& nums) {
    int k = 1;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return nums;
}

int main(){

    vector<int>m;
    m.push_back(12);
    m.push_back(34);
    m.push_back(34);
    m.push_back(34);
    m.push_back(54);
    m.push_back(23);
    m.push_back(23);
    m.push_back(23);
    m.push_back(1);
    m.push_back(1);
    m.push_back(2);
    m.push_back(2);


for(auto x : m){
    cout<<x<<' ';
}

cout<<'\n';

removeD(m);

 return 0;
}