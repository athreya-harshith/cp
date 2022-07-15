/****  D. Double Strings ****/
/*
   You are given 𝑛 strings 𝑠1,𝑠2,…,𝑠𝑛 of length at most 8.

For each string 𝑠𝑖, determine if there exist two strings 𝑠𝑗 and 𝑠𝑘 such that 𝑠𝑖=𝑠𝑗+𝑠𝑘. That is, 𝑠𝑖 is the concatenation of 𝑠𝑗 and 𝑠𝑘. Note that 𝑗 can be equal to 𝑘.

Recall that the concatenation of strings 𝑠 and 𝑡 is 𝑠+𝑡=𝑠1𝑠2…𝑠𝑝𝑡1𝑡2…𝑡𝑞, where 𝑝 and 𝑞 are the lengths of strings 𝑠 and 𝑡 respectively. For example, concatenation of "code" and "forces" is "codeforces".

Input
The first line contains a single integer 𝑡 (1≤𝑡≤104) — the number of test cases.

The first line of each test case contains a single integer 𝑛 (1≤𝑛≤105) — the number of strings.

Then 𝑛 lines follow, the 𝑖-th of which contains non-empty string 𝑠𝑖 of length at most 8, consisting of lowercase English letters. Among the given 𝑛 strings, there may be equal (duplicates).

The sum of 𝑛 over all test cases doesn't exceed 105.

Output
For each test case, output a binary string of length 𝑛. The 𝑖-th bit should be 𝟷 if there exist two strings 𝑠𝑗 and 𝑠𝑘 where 𝑠𝑖=𝑠𝑗+𝑠𝑘, and 𝟶 otherwise. Note that 𝑗 can be equal to 𝑘  */


#include<bits/stdc++.h>
using namespace std;
void solve(string *a,int s)
{
    vector<bool> ans;
    for(int i=0;i<8;i++)
    {
        string a1=a[i];
        cout<<a1<<endl;
        for(int j=0;j<8;j++)
        {
            if(i!=s && j!=s)
            {
                cout<<j1<<endl;
                string j1=a[j];
                string c1=a1+j1;
                cout<<c1<<endl;
                string c2=j1+a1;
                cout<<c2<<endl;
                if(a[s]==c1 || a[s] == c2)
                {
                    ans.push_back(1);
                }
                ans.push_back(0);
            }
        }
    }
    for(auto it:ans)
        cout<<it<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s[8];
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>s[i];
        string ans;
        for(int i=0;i<8;i++)
            solve(s,i);
    }
}