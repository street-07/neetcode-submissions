class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0,sum=0,cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                sum=sum+nums[j];
                if(sum==k) cnt++;
            }
            sum=0;
        }
        return cnt;
    }
};