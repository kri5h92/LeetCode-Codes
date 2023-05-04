class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        bool flag = 0;
        int len = flowerbed.size();
            if(len == 1)
            {
                if(flowerbed[0] == 0 || n == 0)
                    return true;
                else 
                    return false;
            }
        for(int i : flowerbed)
        {
            if(i == 0)
                count++;
            if(i == 1)
            {
                if(flag)
                    n = n - (count - 1)/2;
                else
                    n = n - (count/2);
                count = 0;
                flag = true;
            }
        }
        if(count>1)
        {
            
             if(count%2==0)
                n = n - (count)/2;
             else if(flag)
                n = n - ((count-1)/2);
            else 
                n = n - ((count+1)/2);
        }
        if(n <= 0)
            return true;
        else 
            return false;
        
    }
};