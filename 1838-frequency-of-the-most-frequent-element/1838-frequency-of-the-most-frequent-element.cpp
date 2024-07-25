class Solution {
public:
        int check(int i, int k, vector<int>& nums, vector<long>& prefix) {
        int target = nums[i];
        int left = 0;
        int right = i;
        int best = i;
        
        while (left <= right) {
            int mid = (left + right) / 2;
            long count = i - mid + 1;
            long finalSum = count * target;
            int originalSum = prefix[i] - prefix[mid] + nums[mid];
            int operationsRequired = finalSum - originalSum;
            
            if (operationsRequired > k) {
                left = mid + 1;
            } else {
                best = mid;
                right = mid - 1;
            }
        }
        
        return i - best + 1;
    }
    
    
    int maxFrequency(vector<int>& nums, int k) {
        // solution 1 - advanced sliding window
        
        // sort(nums.begin(), nums.end());
        // long long j = 0, ans = 1, sum = 0;
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     sum+=nums[i];
        //     if((i-j+1)*nums[i] - sum > k) 
        //         sum-=nums[j++];
        //     ans = max(ans, i-j+1);
        // }
        // return ans;
        
        //solution 2 - binary search
        
        sort(nums.begin(), nums.end());
        vector<long> prefix;
        prefix.push_back(nums[0]);
        
        for (int i = 1; i < nums.size(); i++) {
            prefix.push_back(nums[i] + prefix.back());
        }
        
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans = max(ans, check(i, k, nums, prefix));
        }
        
        return ans;
        
        
        
    }
};