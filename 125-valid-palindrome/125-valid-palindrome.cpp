class Solution {
public:
    bool isPalindrome(string s) {
        // string ns = "";
        int x = 0;
        for(char i : s)
        {
           if(iswalnum(i))
           {
               if(i >= 65 && i <= 90)
                   s[x++]=(i+32);
               else 
                   s[x++]=i;
           }
        }
        cout<<s << " "<<x;
        int i = 0, j = x-1;
        while(i < j)
        {
            if(s[i++] != s[j--])
                return false;
        }
        return true;
    }
};