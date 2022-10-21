class Solution {
public:
    int check(vector<int> a, vector<int> b) {
        for(int i = 0; i<26; i++) {
            if(a[i]!=b[i]) return 0;
        }
        return 1;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> a(26,0),b(26,0);
        int m = p.length();
        int n = s.length();
        if(m>n) return ans;
        for(int i = 0; i<m; i++) a[p[i]-'a']++,b[s[i]-'a']++;
        if(check(a,b)) ans.push_back(0);
        for(int i = 1; i<=n-m; i++) {
            b[s[i-1]-'a']--;
            b[s[i+m-1]-'a']++;
            if(check(a,b)) ans.push_back(i);
        }
        return ans;
    }
};
