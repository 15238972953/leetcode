#include<iostream>
#include<vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string str;
        int i,j;
        for(int pos=0;pos<s.size();pos++){
            while (s[pos]==' '&&pos<s.size()){
                pos++;
            }
            int a=pos;
            while (s[pos]!=' '&&pos<s.size()){
                pos++;
            }
            int b=pos;
            if(a<b&&str.size()!=0)
                str=s.substr(a,b-a)+' '+str;
            else
                str=s.substr(a,b-a)+str;
        }
        return str;
    }
};

int main() {
    Solution So;
    string s="  hello world!  ";
    cout << So.reverseWords(s) << endl;
    return 0;
}