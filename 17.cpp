#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
private:
    unordered_map<char,string> map{
        {'2',"abc"},
        {'3',"def"},
        {'4',"ghi"},
        {'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9',"wxyz"}
    };
    vector<string> result;
    string path;
    void backtracking(string digits,int size,int Index){
        if(path.size()==size){
            result.push_back(path);
            return;
        }
        for(int i=0;i<map[digits[Index]].size();i++){
            path.push_back(map[digits[Index]][i]);
            backtracking(digits,size,Index+1);
            path.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0){
            return result;
        }
        backtracking(digits,digits.size(),0);
        return result;
    }
};
int main()
{
    Solution So;
    string digits = "23";
    vector<string> res = So.letterCombinations(digits);
    for(auto r:res){
        cout<<r<<" ";
    }
    return 0;
}