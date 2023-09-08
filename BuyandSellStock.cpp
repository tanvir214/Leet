/*Best Time to Buy and Sell Stock */

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s=prices.size();
        int p=0;

        for(int i=0;i<s;i++){
            for(int j=i+1;j<s;j++){
                if(prices[j]-prices[i]>p){
                    //if(p<prices[j]-prices[i]){
                        p=prices[j]-prices[i];
                    //}
                }
            }
        }
        return p;
    }
};


int main(){
    vector<int> num={1,2,3,4,5};

    Solution a;

    cout<<a.maxProfit(num);
}