class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int i = 0, j = height.size() - 1;
        while(i < j)
        {
            int mn = min(height[i],height[j]);
            int dist = j - i;
            area = max(dist*mn, area);
            if(height[i] <= height[j])
                i++;
            else 
                j--;
        }
        return area;
    }
};