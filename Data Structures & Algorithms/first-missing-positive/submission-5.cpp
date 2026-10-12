
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int> hash;

        for (int x : nums) {
            if (x > 0) {
                hash[x]++;
            }
        }

        int expected = 1;

        for (auto it : hash) {
            if (it.first == expected) {
                expected++;
            }
            else if (it.first > expected) {
                return expected;
            }
        }

        return expected;
    }
};
