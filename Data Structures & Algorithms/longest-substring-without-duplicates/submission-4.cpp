class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mp(256, -1);

        int l = 0;
        int ans = 0;

        for (int r = 0; r < s.size(); r++) {

            // Character was seen inside current window
            if (mp[s[r]] >= l) {
                l = mp[s[r]] + 1;
            }

            // Store latest index
            mp[s[r]] = r;

            // Calculate current window length
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};