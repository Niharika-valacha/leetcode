class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string res="";
        for(int i=0;i<words.size();i++)
        {
            res=res+words[i];
            if(res == s)
            {
                 return true ;
            }
            
        }
         return false;
    }
};