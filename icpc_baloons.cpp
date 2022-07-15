/****   B. ICPC Balloons  ***/
/*  
    In an ICPC contest, balloons are distributed as follows:

Whenever a team solves a problem, that team gets a balloon.
The first team to solve a problem gets an additional balloon.
A contest has 26 problems, labelled 𝖠, 𝖡, 𝖢, ..., 𝖹. You are given the order of solved problems in the contest, denoted as a string 𝑠, where the 𝑖-th character indicates that the problem 𝑠𝑖 has been solved by some team. No team will solve the same problem twice.
Determine the total number of balloons that the teams recieved. Note that some problems may be solved by none of the teams.

Input
The first line of the input contains an integer 𝑡 (1≤𝑡≤100) — the number of testcases.

The first line of each test case contains an integer 𝑛 (1≤𝑛≤50) — the length of the string.

The second line of each test case contains a string 𝑠 of length 𝑛 consisting of uppercase English letters, denoting the order of solved problems.

Output
For each test case, output a single integer — the total number of balloons that the teams received

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> a(26,0);
        string s;
        cin>>n;
        cin>>s;
        long cnt=0;
        for(int i=0;i<s.length();i++)
        {
            if(a[s[i]-'A']==0)
            {
                cnt+=2;
                a[s[i]-'A']=1;
            }
            else
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}