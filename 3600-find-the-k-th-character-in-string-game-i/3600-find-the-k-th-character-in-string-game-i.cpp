class Solution {
public:
    char kthCharacter(int k) {
        
        string word="a";
        vector<char>alphabet(27);
        char ch='a';
        for(int i=0;i<26;i++)
        {
            alphabet[i]=ch;
            ch++;
        }
        alphabet[26]='a';
        while(word.length()<=k)
        {
            int i=0;
            int n=word.length();
            while(i<n)
            {
             word=word+alphabet[word[i]-'a'+1];
             i++;
            }
        }

        return word[k-1];
    }
};