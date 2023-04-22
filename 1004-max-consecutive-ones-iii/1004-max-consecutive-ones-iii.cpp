class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size(), i = 0;
        int ans = 0, count = 0;
        while(k >= 0 && i < n)
        {
            if(nums[i] == 0)
            {
                if(k==0)
                    break;
                k--;
               
            }
            count++;
            i++;
        }
        ans = count;
        int j = 0;
        while(j<=i && i < n)
        {
            while(k < 1 && j <= i)
            {
                if(nums[j] == 0)
                    k++;
                count--;
                j++;
            }
            while(k >= 0 && i < n)
            {
                if(nums[i] == 0)
                {
                    if(k==0)
                        break;
                    k--;
                   
                }
                count++;
                i++;
            }
            ans=max(ans,count);        
        }
        return ans;
    }
};