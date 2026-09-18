class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int n = nums.size();

        int l = 0, r = 0, cnt = 0;
        int maxSum = nums[0];

        // Normal Kadane
        while(r < n) {

            if(cnt < 0) {
                l = r;
                cnt = 0;
            }

            cnt += nums[r];

            maxSum = max(maxSum, cnt);

            r++;
        }


        // Minimum Kadane
        l = 0;
        r = 0;
        cnt = 0;

        int minSum = nums[0];
        int total = 0;

        while(r < n) {


            if(cnt > 0) {
                cnt = 0;
                l = r ;
            }
            total += nums[r];

            cnt += nums[r];

            minSum = min(minSum, cnt);

            r++;
        }


        // All elements are negative
        if(maxSum < 0)
            return maxSum;


        // Circular maximum
        int circularSum = total - minSum;

        return max(maxSum, circularSum);
    }
};