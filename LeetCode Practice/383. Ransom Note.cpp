class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26]={0};
        for(auto chr : magazine) count[chr-'a']++;
        for(auto chr : ransomNote) if (count[chr-'a']--<=0) return false;
        return true;
    }
};
