class Solution {
public:
    bool isPalindrome(int x) {
        // long long t = 0, c = x;
        string num = to_string(x);
        int n = num.length();
        for(int i = 0; i < n/2; i++)
        {
            if(num[i] != num[n-i-1])
                return false;
        }
        return true;
        // while(x>0)
        // {
        //     t = t*10 + x%10;
        //     x/=10;
        // }
        // // bool ans = (t==c) ? true : false;
        // return (t==c);
        
        
    }
};