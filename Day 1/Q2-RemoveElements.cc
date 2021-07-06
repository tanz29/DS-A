#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int i=0,j,l;
        l=nums.size();
        j=0;
        if(l==0)
            return 0;
        for(i=0;i<l;i++){
             if(nums[i]!=val){
                 nums[j]=nums[i];
                     j++;
                 
             }
            
        }
        return j;
    }

int main(){
    int n,no,k,val;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>no;
        nums.push_back(no);
    }
    cin>>val;
    k=removeElement(nums,val);
    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
}