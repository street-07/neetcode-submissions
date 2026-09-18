class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int l=0,r=0,sum=0;

        int mp[3]={0};

        for(int i=0;i<n;i++){
            if(bills[i]==5){
                mp[0]++;
            }
            else if(bills[i]==10){
                if(mp[0]==0) return false;
                else mp[0]--;
                mp[1]++;
            }
            else if(bills[i]==20){
                if(mp[1]!=0) {
                    mp[1]--;
                    if(mp[0]!=0) mp[0]--;
                    else return false;
                }
                else{
                    if(mp[0]>=3){
                        mp[0]=mp[0]-3;
                    }
                    else return false;
                }
                mp[2]++;
            }
        }
        return true;
    }
};