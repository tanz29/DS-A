#include<bits/stdc++.h>
using namespace std;


set<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        set<int> s;
        if(m<n){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(nums1[i]==nums2[j]){
                        s.insert(nums1[i]);
                    }
                }
                
            }
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(nums1[i]==nums2[j]){
                        s.insert(nums2[i]);
                    }
                }
                
            }
        }
        
        //vector<int> v(s.begin(), s.end());
        return s;
    }


int main(){
    int n,no,m;
    cin>>m>>n;
    vector<int> nums1;
    for(int i=0;i<m;i++){
        cin>>no;
        nums1.push_back(no);
    }
    vector<int> nums2;
    for(int i=0;i<n;i++){
        cin>>no;
        nums2.push_back(no);
    }
    set<int> s;
    set<int>::iterator it;
    s=intersection(nums1,nums2);
    for(it = s.begin() ; it != s.end() ; it++ ) 
    {
        cout << *it<<" ";
    }
}