#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
    int sum=0;
    void backtracking(int k,int n,int startIndex){
        if(path.size()==k){
            if(n==sum){
                result.push_back(path);
            }
            return;
        }
        for(int i=startIndex;i<=9;i++){
            path.push_back(i);
            sum+=i;
            backtracking(k,n,i+1);
            sum-=i;
            path.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        backtracking(k,n,1);
        return result;
    }
};
int main()
{
    Solution So;
    int k = 3, n = 9;
    vector<vector<int>> res;
    res = So.combinationSum3(k,n);
    for(auto path:res){
        for(auto r:path){
            cout<<r<<" ";
        }
        cout<<endl;
    }
    return 0;
}