#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mpp;
    int n[10] = {2,3,4,2,4,2,1,3,45,2};

    for(int i=0; i < sizeof(n); i++){
        mpp[n[i]]++;
    };

    int q;
    cin>>q;
    while(q--){

        int n=0;
        cin >>n;
        cout<<n<<" "<<mpp[n];

    };
    

return 0;

}