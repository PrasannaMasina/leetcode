class Solution {
public:
    int maxFreqSum(string s) {
        vector<int>vowels(5, 0);
        vector<int>cons(26, 0);
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'a') vowels[0]++;
            else if(s[i] == 'e') vowels[1]++;
            else if(s[i] == 'i') vowels[2]++;
            else if(s[i] == 'o') vowels[3]++;
            else if(s[i] == 'u') vowels[4]++;
            else cons[s[i]-'a']++;
        }
        return *max_element(vowels.begin(), vowels.end())+*max_element(cons.begin(), cons.end());
    }
};