#include<iostream>
#include<vector>
#include <string>
using namespace std;
//动态规划
class Solution {
public:
    int translateNum(int num) {
        string str = to_string(num);
        if(str.size()==1)
            return 1;
        int* dp=new int[str.size()];
        dp[0]=1;
        if(str.substr(0,2)>="10" && str.substr(0,2)<="25"){
            dp[1]=2;
        } else{
            dp[1]=1;
        }
        for(int i=2;i<str.size();i++){
            if(str.substr(i-1,2)>="10" && str.substr(i-1,2)<="25"){
                dp[i]=dp[i-1]+dp[i-2];
            } else{
                dp[i]=dp[i-1];
            }
        }
        return dp[str.size()-1];
    }
};
int main() {
    Solution So;
    int num=12258;
    cout<<So.translateNum(num)<<endl;
    return 0;
}