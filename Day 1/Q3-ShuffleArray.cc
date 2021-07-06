#include<bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> v;
    int i,j,c=0;
    i=0;
    j=n;
    while(j<2*n){
        if(c%2==0){
            v.push_back(nums[i]);
            i++;
        }
        else{
            v.push_back(nums[j]);
            j++;
        }
        c++;
    }
    return v;
}


int main(){
    int n,no,s;
    cin>>s;
    vector<int> nums;
    for(int i=0;i<s;i++){
        cin>>no;
        nums.push_back(no);
    }
    cin>>n;
    vector<int> v;
    v=shuffle(nums,n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}