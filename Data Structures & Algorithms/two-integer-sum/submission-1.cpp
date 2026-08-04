class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0,ans=0;
        vector<int> v(2);
        for(int i=0;i<n;i++){
            //sum=nums[i];
            for(int j=i+1;j<n;j++){
                sum=nums[i]+nums[j];
                if(sum==target) {
                    v[0]=i,v[1]=j;
                    return v;
                }
            }
            
        }
    }
};
