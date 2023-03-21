#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    vector<vector<int>> result; 
    vector<int> path; 
    void backtracking(int n,int k,int startIndex){
        if(path.size()==k){
            result.push_back(path);
        }
        for(int i=startIndex;i<=n;i++){
            path.push_back(i);
            backtracking(n,k,i+1);
            path.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        backtracking(n,k,1);
        return result;
    }
};
int main()
{
    Solution So;
    int n=4,k=2;
    vector<vector<int>> res;
    res = So.combine(n,k);
    for(auto path:res){
        for(auto r:path){
            cout<<r<<" ";
        }
        cout<<endl;
    }
    return 0;
}