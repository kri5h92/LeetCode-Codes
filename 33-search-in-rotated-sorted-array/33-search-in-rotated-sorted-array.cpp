class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1,mid,m;
        while(i<=j)
        {
            m = i + (j-i)/2;
            mid = nums[m];
            if(target>=nums[0] && mid>=nums[0])
            {
                if(target > mid)
                {
                    i = m+1;
                    continue;
                }
                else if(target < mid)
                {
                    j = m - 1;
                    continue;
                }
                else 
                {
                    return m;
                }
            }
            else if(target<nums[0] && mid<nums[0])
            {
                if(target > mid)
                {
                    i = m+1;
                    continue;
                }
                else if(target < mid)
                {
                    j = m - 1;
                    continue;
                }
                else 
                {
                    return m;
                }
            }
            else if(target>=nums[0] && mid<nums[0])
            {
                j = m-1;
            }
            else if(target<nums[0] && mid>=nums[0])
            {
                i = m+1;
            }
            
            
        }
        return -1;
        
    }
};