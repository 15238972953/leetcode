#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a=0,b=0;
        while(b<nums.size()-1&&a<nums.size()-1){
            while (0==nums[a]){
                if(a!=nums.size()-1)
                    a++;
                else break;
            }
            while(0!=nums[b]){
                if(b!=nums.size()-1)
                    b++;
                else break;
            }
            if(a>b){
                swap(nums[a],nums[b]);
            } else{
                a++;
            }
        }
    }
};
int main()
{
    Solution So;
    vector<int> nums = {1,0,3,6,0,4,0,0,4,6};
    So.moveZeroes(nums);
    for(auto r:nums){
        cout<<r<<" ";
    }
    cout<<endl;
    return 0;
}