
#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i=0,j,temp=0;
    int l=nums.size();
    if(l==0)
        return 0;
    for(j=1;j<l;j++){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
        }            
    }
    return i+1;
}


int main(){
    int n,no,k;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>no;
        nums.push_back(no);
    }
    k=removeDuplicates(nums);
    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
}