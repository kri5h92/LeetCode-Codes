class Solution {
public:
    #define upper (pow(2,31) - 1)
    #define lower (pow(2,31)*(-1))
    long long int reverse(int x) {
        bool flag = false;
        if(x<0)
            flag = true;
        x = abs(x);
        long long int ans = 0;
        while(x>0)
        {
            ans *= 10;
            int temp = x%10;
            ans += temp;
            x /= 10;
        }
        if(flag)
            ans = (-1) * ans;
        if(ans > upper || ans < lower)
            return 0;
        return ans;
        
    }
};