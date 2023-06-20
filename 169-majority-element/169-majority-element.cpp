class Solution {
public:
    //Use Majority Vote Algorithm
    int majorityElement(vector<int>& nums) {
        int majorElement = nums[0], count = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            if(count == 0)
            {
                majorElement = nums[i];
                count++;
            }
            else if(majorElement == nums[i])
            {
                count++;
            }
            else
                count--;
        }
    return majorElement;
    }
};