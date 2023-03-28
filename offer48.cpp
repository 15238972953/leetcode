#include<iostream>
#include<vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string str;
        int maxlen=0;
        for(int i=0;i<s.size();++i){
            if(str.find(s[i])!=-1){
                str.erase(0,str.find(s[i])+1);
            }
            str+=s[i];
            maxlen = maxlen>str.size()?maxlen:str.size();
        }
        return maxlen;
    }
};

int main() {
    Solution So;
    string s="aab";
    cout << So.lengthOfLongestSubstring(s) << endl;
    return 0;
}