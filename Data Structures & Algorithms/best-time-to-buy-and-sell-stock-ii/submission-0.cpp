class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int sum=0;
        vector<int> mp;
        for(int i=0;i<n-1;i++){
            mp.push_back(prices[i+1]-prices[i]);
        }
        for(int i=0;i<mp.size();i++){
            if(mp[i]>0) sum+=mp[i];
        }
        return sum;
    }
};