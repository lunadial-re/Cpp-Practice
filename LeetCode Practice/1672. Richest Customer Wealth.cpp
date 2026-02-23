class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        for(auto account : accounts)
        {
            int temp =0;
            for(auto item : account) temp+=item;
            cout<<temp<<endl;
            if (temp > max) max=temp;
        }
        return max;
    }
};
