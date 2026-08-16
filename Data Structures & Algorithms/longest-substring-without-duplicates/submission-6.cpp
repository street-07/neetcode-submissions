class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mp(256, -1);
        int l=0,r=0,n=s.size();
        int sum=0;
        
        while(r<n){
            
            if(mp[s[r]]!=-1){
                
                if(l<=mp[s[r]]){
                    l=mp[s[r]]+1;
                }
                
                //mp[s[r]]=r;
            }
            sum=max(sum,(r-l+1));
            mp[s[r]]=r;
            r++;
            
            
            
        }
        return sum;
    }
};
