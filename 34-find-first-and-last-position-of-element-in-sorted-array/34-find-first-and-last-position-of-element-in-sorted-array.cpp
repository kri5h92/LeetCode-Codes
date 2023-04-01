class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)
            return{-1,-1};
        int l = 0, r = nums.size()-1;
        
        int st = l, end = r;
        bool flag = 0;
        int idx = -1;
        if(l==r)
        {
            if(nums[l] == target)
                return{0,0};
            else 
                return{-1,-1};
        }
        while(l<r)
        {
            int mid = l+(r-l)/2;
            if(nums[mid] >= target)
            {
                // end = mid - 1;
                r = mid;
                if(nums[mid] == target)
                    idx = mid;
            }
            else if(nums[mid] < target)
            {
                l = mid + 1;
                // st = mid + 1;
            }
        }
        l = 0;
        st = r;
        if(nums[st] != target)
        {
            return{-1,-1};
        }
        r = nums.size()-1;
        while(l<r)
        {
            int mid = l + (r-l)/2 + 1;
            if(nums[mid] > target)
            {
                // end = mid - 1;
                r = mid - 1;
            }
            else
            {
                if(nums[mid] == target)
                    idx = mid;
                l = mid;
                // st = mid + 1;
            }
        }
        end = r;
       
        return {st,end};
    }
};