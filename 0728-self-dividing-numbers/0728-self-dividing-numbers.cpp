class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int>ans;

        while(left<=right)
        {
            int num=left;
            bool isSelfDividing=true;

            while(num>0)
            {
                int temp=num%10;
                if(temp==0 || left%temp!=0)
                {
                    isSelfDividing=false;
                    break;
                }
                num=num/10;
            }

            if(isSelfDividing)
            ans.push_back(left);

            left++;
        }

        return ans;
    }
};