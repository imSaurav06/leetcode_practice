#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mpp;
    int n[12] = {1,2,3,4,2,4,2,1,3,4,5,2};

    for(int i=0; i < sizeof(n)/sizeof(n[0]); i++){
        mpp[n[i]]++;
    };

    for( auto it : mpp){
        cout<< it.first <<"---->"<< it.second<<endl;
    }

    // int q;
    // cin>>q;
    // while(q--){

    //     int n=0;
    //     cin >>n;
    //     cout<<n<<" "<<mpp[n];

    // };
    

return 0;

}