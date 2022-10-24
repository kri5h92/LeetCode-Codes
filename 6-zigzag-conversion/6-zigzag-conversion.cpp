class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
                return s;
        int n = s.length(), curr = 0;
        bool dir = false;
        vector<string> v(min(n,numRows));
        for(char c: s)
        {
            v[curr] += c;
            if(curr == 0 || curr == numRows - 1)
                dir = !dir;
            curr += dir ? 1 : -1;
        }
        string ans = "";
        for(string i : v)
        {
            ans+=i;
        }
        return ans;
    }
};