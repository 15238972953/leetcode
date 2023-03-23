#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(0==prices.size()){
            return 0;
        }
        int profit=0;
        int Min=0,Max=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<prices[Min]){
                Min=i;
                Max=i;
            }
            if(prices[i]>prices[Max])
            {
                Max=i;
            }
            profit=max(profit,prices[Max]-prices[Min]);
        }
        return profit;
    }
};
int main()
{
    Solution So;
    vector<int> prices={2,4,1};
    cout<<So.maxProfit(prices)<<endl;
    return 0;
}