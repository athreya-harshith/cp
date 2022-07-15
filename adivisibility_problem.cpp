/*** A. Divisibility Problem***/

/*  
You are given two positive integers 𝑎 and 𝑏. In one move you can increase 𝑎 by 1 (replace 𝑎 with 𝑎+1). Your task is to find the minimum number of moves you need to do in order to make 𝑎 divisible by 𝑏. It is possible, that you have to make 0 moves, as 𝑎 is already divisible by 𝑏. You have to answer 𝑡 independent test cases.

Input
The first line of the input contains one integer 𝑡 (1≤𝑡≤104) — the number of test cases. Then 𝑡 test cases follow.

The only line of the test case contains two integers 𝑎 and 𝑏 (1≤𝑎,𝑏≤109).

Output
For each test case print the answer — the minimum number of moves you need to do in order to make 𝑎 divisible by 𝑏


*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<0<<endl;
        }
        else
            cout<<b-(a%b)<<endl;
    }
}