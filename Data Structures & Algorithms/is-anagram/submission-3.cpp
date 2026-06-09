class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        bool anarg=true;
        int ans=0;
        int m=s.size();
        int n=t.size();
        if(m==n){
        for(int i=0;i<m;i++)
        {
           
                if(s[i]==t[i])
                {
                    ans++;
                }
           
        }
        }
        if(ans==m)
        return anarg;

        return false;
    }
};
