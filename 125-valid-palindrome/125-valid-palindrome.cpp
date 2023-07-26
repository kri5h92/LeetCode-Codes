class Solution {
public:
    bool isPalindrome(string s) {
        // string ns = "";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int x = 0;
        for(char i : s)
        {
            if(iswalnum(i))
                s[x++]=i;
           
        }
        // cout<<s << " "<<x;
        int i = 0, j = x-1;
        while(i < j)
        {
            if(s[i++] != s[j--])
                return false;
        }
        return true;
    }
};