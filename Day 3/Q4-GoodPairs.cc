#include<bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    int c=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                c++;
            }
        }
    }
    return c;
}

int main(){
    int n,no,c;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>no;
        nums.push_back(no);
    }
    c=numIdenticalPairs(nums);
    cout<<c;
}