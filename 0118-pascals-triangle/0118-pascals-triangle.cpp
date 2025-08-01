class Solution {
public:
    vector<vector<int>> generate(int rows) {
        
        vector<vector<int>>arr;
        arr.push_back({1});
        if(rows==1)
        return arr;

        for(int i=0; i<rows-1; i++)
        {
            vector<int>a;
            a.push_back(1);
            
            int x=0, y=1;
            
            while(y<arr[i].size()){
                a.push_back(arr[i][x]+arr[i][y]);
                x++;
                y++;
            }
            a.push_back(1);
            arr.push_back(a);
        }

        return arr;
    }
};