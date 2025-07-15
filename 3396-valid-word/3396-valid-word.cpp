class Solution {
public: 
// 0 4 8 14  20
    bool isValid(string word) {
        if (word.length()<3)
        return 0;

        vector<bool>sAlpha(26,0);
        vector<bool>bAlpha(26,0);
      
        bool haiKyaV=0;
        bool haiKyaC=0;
        for(int i=0;i<word.length();i++)
        {
           if(word[i]=='@'|| word[i]=='#'||word[i]=='$')
           return 0;
           

            if(haiKyaV==0)
           {
             if(word[i]=='a'|| word[i]=='e'|| word[i]=='i'|| word[i]=='o'||
             word[i]=='u'|| word[i]=='A'|| word[i]=='E'|| word[i]=='I'||
             word[i]=='O'|| word[i]=='U' )
             {
                haiKyaV=1;
             }
             
           }
             if(haiKyaC==0)
             {
             if(word[i]=='b'||word[i]=='c'||word[i]=='d'||word[i]=='z'||
                word[i]=='f'|| word[i]=='g'||word[i]=='h'||word[i]=='j'||
                word[i]=='k'||word[i]=='l'||word[i]=='m'||word[i]=='n'||
                word[i]=='p'||word[i]=='q'||word[i]=='r'||word[i]=='s'||
                word[i]=='t'||word[i]=='v'||word[i]=='w'||word[i]=='x'||
                word[i]=='y'||
                word[i]=='B'||word[i]=='C'||word[i]=='D'||word[i]=='Z'||
                word[i]=='F'||word[i]=='G'||word[i]=='H'||word[i]=='J'||
                word[i]=='K'||word[i]=='L'||word[i]=='M'||word[i]=='N'||
                word[i]=='P'||word[i]=='Q'||word[i]=='R'||word[i]=='S'||
                word[i]=='T'||word[i]=='V'||word[i]=='W'||word[i]=='X'||
                word[i]=='Y')
                haiKyaC=1;
             }

               
           }
        
          if(haiKyaV && haiKyaC)
          return 1;
          
           return 0;
        }
    
};