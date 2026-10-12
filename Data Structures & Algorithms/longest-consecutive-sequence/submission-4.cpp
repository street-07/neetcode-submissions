class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int m=st.size();
        vector<int> v;
        for(auto it:st){
            v.push_back(it);
        }
        int cnt=1,sum=0;
        //int k=0;
        for(int i=0;i<m-1;i++){
            if(v[i+1]-v[i]==1) {
            cnt++;
            
            }
            else {
                sum=max(sum,cnt);
                cnt=1;
            }
        }
        sum=max(sum,cnt);
        return sum;
    }
};
