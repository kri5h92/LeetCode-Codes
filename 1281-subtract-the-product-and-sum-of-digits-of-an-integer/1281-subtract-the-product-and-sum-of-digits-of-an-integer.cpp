class Solution {
public:
    int subtractProductAndSum(int n) {
        // vector<int> digits;
        int sum = 0, prod = 1;
        while(n)
        {
            int x = n%10;
            sum+=x;
            prod*=x;
            // digit.push_back(n%10);
            n/=10;
        }
        return prod - sum;
    }
};