class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        ans = (high-low)/2;
        if(low%2 && high%2)
            ans++;
        else if(high%2||low%2)
            ans++;
        
        return ans;
    }
};