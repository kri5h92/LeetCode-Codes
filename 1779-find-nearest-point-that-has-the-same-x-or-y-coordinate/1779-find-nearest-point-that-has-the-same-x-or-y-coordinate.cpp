class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans = INT_MAX;
        int idx = -1;
        for(int i = 0; i < points.size(); i++)
        {
            if(points[i][0] == x || points[i][1]==y)
            {
                if((abs(x-points[i][0]) + abs(y-points[i][1])) < ans)
                   { idx = i;
                    ans = (abs(x-points[i][0]) + abs(y-points[i][1]));}
            }    
        }
        
            return idx;
    }
};