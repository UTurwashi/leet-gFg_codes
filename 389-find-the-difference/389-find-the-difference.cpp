class Solution {
public:
    char findTheDifference(string s, string t) {
            s=s+t;
           char c=0;
            for(auto i:s)
                c=c^i;
            return c;
    }
};