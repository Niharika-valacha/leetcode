class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> ans(2);
        for(int i =0;i<nums.size();i++)  // value enter ho gyi 
        {
              freq[nums[i]]++;
        }
        for(auto &num:freq)
        {
            if(2 == num.second)
            {
                 ans[0]=num.first;
                break;
            }
        }
        for(int i=1;i<nums.size()+1;i++)
        {
            if(0 ==freq[i])
            {
                ans[1]=i;
                break;
            }
        }
        return ans ;
        
    }
};