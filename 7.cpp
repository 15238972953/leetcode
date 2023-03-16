#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int a=0;
        while(abs(x)>0){
            a=x%10+a*10;
            x=x/10;
            if(a*10/10!=a){
                return 0;
            }
        }
        return a;
    }
};
int main()
{
    Solution So;
    int x=1534236469;
    cout<<So.reverse(x)<<endl;
    return 0;
}