class Solution {
public:
    string triangleType(vector<int>& nums) {
    
    int a=nums[0], b=nums[1], c=nums[2];
    vector<string>ans={"equilateral", "isosceles", "scalene","none"};

    if(a+b>c && a+c>b && b+c>a)
    {
        if(a==b && b==c)
        return ans[0];

        if(a!=b && b!=c && a!=c)
        return ans[2];

        return ans[1];
    }

    return ans[3];
    }
};