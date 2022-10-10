class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0)
            {
                count++;
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(nums[i] != 0)
            {
                int x = i, s = 0;
                while(x>0 && s < count)
                {
                    
                    if(nums[x-1] == 0)
                    {
                        swap(nums[x],nums[x-1]);
                        s++;
                    }
                    else 
                        break;
                    x--;
                }
            }
        }
    }
};