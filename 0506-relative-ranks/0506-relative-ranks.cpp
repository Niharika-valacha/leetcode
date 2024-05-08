class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int> pq;
        for(auto it:score)
        {
            pq.push(it);
        }
        
        map<int,string> mp;
        int i=1;
        while(!pq.empty())
        {
            if(i==1)
            {
                mp.insert({pq.top(),"Gold Medal"});
                pq.pop();
                i++;
            }
            else if(i==2)
            {
                mp.insert({pq.top(),"Silver Medal"});
                pq.pop();
                i++;
            }
            else if(i==3)
            {
                mp.insert({pq.top(),"Bronze Medal"});
                pq.pop();
                i++;
              }
            else
            {
                string s =to_string(i);
                mp.insert({pq.top(),s});
                    pq.pop();
                i++;
}
        }
                vector<string> ans;
        for(int i = 0; i < score.size(); i++)
        {
            ans.push_back(mp[score[i]]);
        }
        return ans;

        
    }
};