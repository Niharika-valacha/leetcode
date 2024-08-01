class Solution {
public:
    int countSeniors(vector<string>& details) {
        
      int count =0;
        for(const string   & i:details)
        {
            char tens = i[11];
            char ones = i[12];
            if(tens> '6'||(tens == '6' & ones>'0'))
            {
                count++;
            }
        }
        return count;
        
    }
};