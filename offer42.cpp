#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    //动态规划
    int maxSubArray(vector<int>& nums) {
        int pro=0;
        int maxstr=nums[0];
        for(auto x:nums){
            pro=max(pro+x,x);
            maxstr=max(maxstr,pro);
        }
        return maxstr;
    }
};
int main()
{
    Solution So;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<So.maxSubArray(nums)<<endl;
    return 0;
}