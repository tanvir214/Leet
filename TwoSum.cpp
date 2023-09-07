#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int s=nums.size();

            for(int i=0;i<s;i++){
                for(int j=i+1;j<s;j++){
                    if(nums[i]+nums[j]==target){
                        return {i,j};
                    }
                }
            }
            return {};
    }
};

int main(){
    vector<int> num={1,2,3,4,5};

    Solution a;

    vector<int> result=a.twoSum(num,9);

    for(int i=0;i<result.size();i++)
        cout<<result[i]<<" "<<num[result[i]];

}