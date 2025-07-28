class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int>map;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5)
            map[5]++;
            else if(bills[i]==10){
                if(map[5]==0)
                return false;
                else{
                map[5]--;
                map[10]++;
                }
            }
            else{
                if(map[10]>0 && map[5]>0){
                    map[10]--;
                    map[5]--;
                }
                else if(map[10]==0 && map[5]>=3)
                map[5]=map[5]-3;

                else
                return false;
            }
        }

        return true;
    }
};