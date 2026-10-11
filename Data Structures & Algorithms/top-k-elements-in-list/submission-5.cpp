class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

 vector<pair<int,int>> v;               // {count, number}
        for (auto& it : mp) {
            v.push_back({it.second, it.first});
        }

        sort(v.rbegin(), v.rend());            // highest count first

        vector<int> v1;
        for (int i = 0; i < k; i++) {
            v1.push_back(v[i].second);         // .second is the number now
        }
        return v1;
    }
};