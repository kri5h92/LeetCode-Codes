class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer;
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        vector<int> v(max(s1.size(), s2.size()));
        auto it = set_difference(s1.begin(),s1.end(), s2.begin(), s2.end(), v.begin());
        v.resize(it-v.begin());
        answer.push_back(v);
        // v.clear();
        vector<int> v2(max(s1.size(), s2.size()));
        auto it2 = set_difference(s2.begin(),s2.end(), s1.begin(), s1.end(), v2.begin());
        v2.resize(it2-v2.begin());
        answer.push_back(v2);
        return answer;
    }
};