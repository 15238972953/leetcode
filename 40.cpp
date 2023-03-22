#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
    int sum=0;
    void backtracking(vector<int>& candidates,int target,int startIndex){
        if(sum==target){
            result.push_back(path);
            return;
        }else if(sum>target){
            return;
        }
        for(int i=startIndex;i<candidates.size();i++){
            //通过这个if判断实现去重
            if (i > startIndex && candidates[i] == candidates[i - 1]) {
                continue;
            }
            path.push_back(candidates[i]);
            sum+=candidates[i];
            backtracking(candidates,target,i+1);
            sum-=candidates[i];
            path.pop_back();
        }
    }    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        backtracking(candidates,target,0);
        return result;
    }
};

int main()
{
    Solution So;
    vector<int> candidates = {10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>> res = So.combinationSum2(candidates,target);
    for(auto path:res){
        for(auto r:path){
            cout<<r<<" ";
        }
        cout<<endl;
    }
    return 0;
}