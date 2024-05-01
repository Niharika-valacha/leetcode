class Solution {
public:
    string reversePrefix(string word, char ch) {
        int j=0;
        int n=word.length();
        for(int i=0;i<n;i++)
        {
            if(word[i]==ch)
            {
                while(j<=i){
                        swap(word[i],word[j]);
                         i--;
                    j++;
                          }
                return word;
                 
            }
        }
        return word;
        
    }
};