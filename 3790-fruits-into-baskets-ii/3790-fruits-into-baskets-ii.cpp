class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        
        vector<bool>arr(fruits.size(), false);
        for(int i=0;i<fruits.size();i++){

             for(int j=0;j<baskets.size();j++){
                if(arr[j]==false){
                    if(baskets[j]>=fruits[i]){
                    arr[j]=true;
                    break;
                    }
                }
             }
        }

        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==false)
            count++;
        }

        return count;
    }
};