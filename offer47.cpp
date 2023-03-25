#include<iostream>
#include<vector>
#include <string.h>
using namespace std;
class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        int maxv=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j]+=max(i-1<0?0:grid[i-1][j],j-1<0?0:grid[i][j-1]);
            }
        }
        return grid[m-1][n-1];
    }
};
int main() {
    Solution So;
    vector<vector<int>> nums = {
    {1, 3, 1},
    {1, 5, 1},
    {4, 2, 1}
    };
    cout<<So.maxValue(nums)<<endl;
    return 0;
}