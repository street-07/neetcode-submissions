class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
int n=nums.size();
long long int sum=1;
int cnt=0;
for(int i=0;i<n;i++){
    if(nums[i]==0)  cnt++;
    sum=sum*nums[i];
}
int l=1;
if(cnt==1){
    for(int i=0;i<n;i++){
        if(nums[i]!=0) l=l*nums[i];
    }
}
for(int i=0;i<n;i++){
    if(cnt==0) nums[i]=sum/nums[i];
    else if(cnt>1){
         nums[i]=0; 
    }
    else {
        if(nums[i]!=0) nums[i]=0;
        else nums[i]=l;
    }
}
return nums;
    }
};
