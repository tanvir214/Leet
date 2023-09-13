///Product of Array Except Self

#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution{
public:
    vector<int> productExceptSelf(vector<int>& nums){
        int s=nums.size(),pro=1;
        vector<int> product;

        for(int i=0;i<s;i++){
            for(int j=0;j<s;j++){
                if(j!=i){
                    pro=pro*nums[j];
                }
            }
            product.push_back(pro);
            pro=1;
        }

        return product;
    }

};

int main(){
    vector<int> nums = {1,2,3,4},product;
    Solution a;

    product=a.productExceptSelf(nums);

    for(int i=0;i<product.size();i++){
        cout<<product[i]<<" ";
    }
}