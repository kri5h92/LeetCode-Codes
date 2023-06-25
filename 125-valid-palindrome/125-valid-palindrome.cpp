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
        string temp;
        temp.assign(ns);
        // cout<<ns<<" "<<temp;
        reverse(ns.begin(), ns.end());
        // cout<<ns<<" "<<temp;
        if(temp == ns)
            return true;
        else 
            return false;
    }
};