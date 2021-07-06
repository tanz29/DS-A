#include<bits/stdc++.h>
using namespace std;


int maximumWealth(vector<vector<int>>& accounts) {
    int sum,max=0;
    for(int i=0;i<accounts.size();i++){
        sum=0;
        for(int j=0;j<accounts[i].size();j++){
            sum=sum+accounts[i][j];    
        }
        if(sum>max){
            max=sum;
        }
    }
    return max;
}


int main(){
    int r,c,k,no;
    cin>>r>>c;
    vector<vector<int>> accounts;
    for (int i = 0; i < r; i++) {
        vector<int> v;
        for (int j = 0; j < c; j++) {
            cin>>no;
            v.push_back(no);
        }
        accounts.push_back(v);
    }
    k=maximumWealth(accounts);
    cout<<k;
}