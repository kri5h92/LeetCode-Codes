class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        vector<int> v(max(s1.size(), s2.size()));
        auto it = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), v.begin());
        v.resize(it - v.begin());
        return v;
        
    }
};