class Solution {
public:
    
    void merge(vector<int> &nums, int st, int mid, int end)
    {
        int l = st, r = mid+1;
        vector<int> temp;
        while(l <= mid && r <= end)
        {
            if(nums[l] <= nums[r])
                temp.push_back(nums[l++]);
            else
                temp.push_back(nums[r++]);
        }
        while(l <= mid)
            temp.push_back(nums[l++]);
        while(r <= end)
            temp.push_back(nums[r++]);
        for(int i = st; i <= end; i++)
        {
            nums[i] = temp[i-st];
        }
        
    }
    int count(vector<int> &nums, int st, int mid, int end)
    {
        int cnt = 0;
        int r = mid+1;
        for(int l = st; l <= mid; l++)
        {
            while(r <= end && nums[l] > 2*(long long)nums[r])
                r++;
            cnt+=(r-mid-1);
            // l++;
        }
        return cnt;
    }
    int mergeSort(vector<int> &nums, int l, int r)
    {
        int cnt = 0;
        if(l<r)
        {
            int mid = l + (r-l)/2;
            cnt += mergeSort(nums, l, mid);
            cnt += mergeSort(nums, mid+1, r);
            cnt += count(nums, l, mid, r);
            merge(nums, l, mid, r);  
        }
        return cnt;
    }
    
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return mergeSort(nums, 0, n-1);
        
    }
};