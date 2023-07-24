class Solution {
public:
    int mySqrt(int x) {
        long long temp = 0, i = 0;
        while(temp<=x)
        {
            i++;
            temp = i*i;
            
        }
        return --i;
        
    }
};