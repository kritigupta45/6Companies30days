#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    int rv( int n)
    {
        string s=to_string(n);
        reverse(s.begin(),s.end());
        return stoll(s);
    }
    int countNicePairs(vector<int>& a) 
    {
        unordered_map<long,long>mp;
        long long res=0;
        for(int i=0;i<a.size();i++)
        {
            int k=a[i]-rv(a[i]);
            if(mp.count(k))res+=mp[k];
            mp[k]++;
        }
        return res%1000000007;
    }
};