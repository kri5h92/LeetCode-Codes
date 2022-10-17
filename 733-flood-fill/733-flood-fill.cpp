class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int st = image[sr][sc];
        if(st!=color)
            dfs(image, sr, sc, st, color);
        return image;
    }
    void dfs(vector<vector<int>>& image, int sr, int sc, int st, int color)
    {
        if(image[sr][sc] == st)
        {
            image[sr][sc] = color;
            if(sr>=1)
                dfs(image, sr-1, sc, st, color);
            if(sc>=1)
                dfs(image, sr, sc-1, st, color);
            if(sr+1 < image.size())
                dfs(image, sr+1, sc, st, color);
            if(sc+1 < image[0].size())
                dfs(image, sr, sc+1, st, color);
            
        }
    }
};