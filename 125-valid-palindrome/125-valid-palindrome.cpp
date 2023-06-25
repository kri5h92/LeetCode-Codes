class Solution {
public:
    bool isPalindrome(string s) {
        string ns = "";
        for(char i : s)
        {
           if(iswalnum(i))
           {
               if(i >= 65 && i <= 90)
                   ns+=(i+32);
               else 
                   ns+=i;
           }
        }
        int i = 0, j = ns.size() - 1;
        while(i < j)
        {
            if(ns[i++] != ns[j--])
                return false;
        }
        return true;
    }
};