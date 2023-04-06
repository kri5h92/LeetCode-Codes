// #include<bits/stdc++.h>
// using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = INT_MAX;
        for(auto i : strs)
        {
            len = min(len,(int)i.length());
        }
        string ans = "";
        bool flag = true;
        for(int i = 0; i < len; i++){
            char ch = strs[0][i];
            for(auto j : strs)
            {
                if(j[i] != ch)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                ans += ch;
        }
        return ans;
    }
};