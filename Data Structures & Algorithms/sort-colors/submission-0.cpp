class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int n=nums.size();
        // for(int j=1;j<n;j++){
        // for(int i=j;i<n;i++){
        //     if(nums[i]<nums[i-1]){
        //         swap(nums[i],nums[i-1]);
        //     }
        // }
        // }
        sort(nums.begin(),nums.end());
        
    }
};