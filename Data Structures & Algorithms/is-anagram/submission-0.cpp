class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        int n=s.size();
        int m=t.size();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }

        for(int j=0;j<m;j++){
            mp[t[j]]--;
            if(mp[t[j]]==0) mp.erase(t[j]);
        }

        if(mp.size()==0) return true;
        else return false;
    }
};
