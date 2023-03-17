#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Solution {
public:
    int minArray(vector<int>& numbers) {
        int n,min=numbers[0];
        for(n=1;n<numbers.size();n++){
            if(numbers[n]<min){
                min=numbers[n];
            }
        }
        return min;
    }
};
int main()
{
    Solution So;
    vector<int> numbers = {1,3,5};
    cout<<So.minArray(numbers)<<endl;
    return 0;
}