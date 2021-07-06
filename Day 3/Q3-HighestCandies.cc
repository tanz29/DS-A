#include<bits/stdc++.h>
using namespace std;


vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=*max_element(candies.begin(),candies.end());
        vector<bool> G_candies;
        for(int i =0;i<candies.size();i++){
            if(candies[i]+extraCandies>=max){
                G_candies.push_back(true);
            }
            else{
                G_candies.push_back(false);
            }
        }
        return G_candies;
    }


int main(){
    int n,no,extraCandies;
    cin>>n;
    vector<int> candies;
    for(int i=0;i<n;i++){
        cin>>no;
        candies.push_back(no);
    }
    cin>>extraCandies;
    vector<bool> v;
    v=kidsWithCandies(candies,extraCandies);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}