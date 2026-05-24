class Solution {
public:
    int kDistinctChar(string& s, int k) {
        //your code goes here
        if(k==0||s.empty())return 0;
        unordered_map<char,int>freq;
        int l=0;
        int maxlen=0;
        for(int r=0;r<s.length();r++){
            freq[s[r]]++;
            while(freq.size()>k){
                freq[s[l]]--;

                if(freq[s[l]]==0){
                    freq.erase(s[l]);
                }
                l++;
            }
            maxlen=max(maxlen,r-l+1);

        }
        return maxlen;
    }
};