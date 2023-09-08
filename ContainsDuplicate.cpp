#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution{
public:
    bool containsDuplicate(vector<int>& nums){
        int s=nums.size();

        for(int i=0;i<s;i++){
            for(int j=i+1;j<s;j++){
                if(nums[i]==nums[j])
                    return true;
            }
        }
        return false;
    }

    bool containsDuplicateSort(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int s=nums.size();

        for(int i=0;i<s;i++){
            if(nums[i]==nums[i+1])
                return true;
        }
        return false;
    }

};


int main(){
    vector<int> num={1,1,2,3,4,5};

    Solution a;

    cout<<a.containsDuplicateSort(num);
}