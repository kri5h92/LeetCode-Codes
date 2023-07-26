class Solution {
public:
    bool isPalindrome(int x) {
        long long t = 0, c = x;
        while(x>0)
        {
            t = t*10 + x%10;
            x/=10;
        }
        // bool ans = (t==c) ? true : false;
        return (t==c);
        
        
    }
};