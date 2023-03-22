#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
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
        // for(int i=startIndex;i<candidates.size();i++){
        //     if(!path.empty()){
        //         if(candidates[i]>=path.back()){
        //             path.push_back(candidates[i]);
        //             sum+=candidates[i];
        //             backtracking(candidates,target,startIndex);
        //             sum-=candidates[i];
        //             path.pop_back();
        //         }
        //     }else{
        //         path.push_back(candidates[i]);
        //         sum+=candidates[i];
        //         backtracking(candidates,target,startIndex);
        //         sum-=candidates[i];
        //         path.pop_back();
        //     }
        // }
        for(int i=startIndex;i<candidates.size();i++){
            path.push_back(candidates[i]);
            sum+=candidates[i];
            backtracking(candidates,target,i);//注意此处i的含义，如何实现不重复；
            sum-=candidates[i];
            path.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtracking(candidates,target,0);
        return result;
    }
};
int main()
{
    Solution So;
    vector<int> candidates = {2,3,5};
    int target = 8;
    vector<vector<int>> res = So.combinationSum(candidates,target);
    for(auto path:res){
        for(auto r:path){
            cout<<r<<" ";
        }
        cout<<endl;
    }
    return 0;
}