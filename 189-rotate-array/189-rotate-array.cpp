class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        k = k%n;
        for(int i = 0; i <= (n-k-1)/2; i++)
        {
            swap(nums[i], nums[n-k-1-i]);
        }
        for(int i = n-k; i< (n-k) + (n-(n-k))/2; i++)
        {
            swap(nums[i], nums[n-1-(i-(n-k))]);
        }
        for(int i = 0; i < n/2; i++)
        {
            swap(nums[i], nums[n-1-i]);
        }
    }
};