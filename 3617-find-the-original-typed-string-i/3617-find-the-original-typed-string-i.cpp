class Solution {
public:
    int possibleStringCount(string word) {
        
        int ans=1;
        vector<int>alphabet(26,0);
        alphabet[word[0]-'a']++;

        for(int i=1;i<word.length();i++)
        {   
            if(alphabet[word[i]-'a']!=0)
            {
                if(word[i-1]==word[i])
                alphabet[word[i]-'a']++;
            }

            else
            alphabet[word[i]-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(alphabet[i]>1)
            ans=ans+alphabet[i]-1;
        }

        return ans;
    }
};