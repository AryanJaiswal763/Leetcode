class Solution {
public:
   bool isPrefixSuffix(string s1, string s2)
   {
     int n=s1.length();
      int cp=0, cs=0;

      for(int i=0;i<n;i++)
      {
        if(s1[i]==s2[i])
        cp++;
        else
        break;
      }

      int i=s1.length()-1;
      int j=s2.length()-1;

      while(i>=0)
      {
        if(s2[j]==s1[i])
        cs++;
        else
        break;

        j--;
        i--;
      }

      if(cp==n && cs==n)
      return true;
      else
      return false;

   }


    int countPrefixSuffixPairs(vector<string>& words) {
        
        int n=words.size();
        int ans=0;

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
            if(words[i].length()<=words[j].length())
            {
            if(isPrefixSuffix(words[i],words[j]))
            ans++;

            }
            }
        }
        return ans;
    }
};