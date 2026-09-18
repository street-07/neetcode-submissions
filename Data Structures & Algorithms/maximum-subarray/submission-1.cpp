class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0,cnt=0,sum=-28199;

        while(r<n){
            if(cnt<0){
                
                //r++;
                l=r;
                cnt=0;
            }
            else{
                cnt+=nums[r];
                r++;
                sum=max(cnt,sum);
            }
            

        }
        return sum;
    }
};
