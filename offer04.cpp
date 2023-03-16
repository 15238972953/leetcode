#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        for (const auto& row: matrix) {
            for (int element: row) {
                if (element == target) {
                    return true;
                }
            }
        }
        return false;
    }
};
int main()
{
    Solution So;
    vector<vector<int>> nums = {{1,4},{2,5}};
    int target = 2;
    cout << So.findNumberIn2DArray(nums, target) << endl;
    //    for(auto r:nums){
    //        cout<<r<<" ";
    //    }
    //    cout<<endl;
    return 0;
}