#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff float
#define dd double
#define ui unsigned int
#define lli long long int
#define S string
#define testip cin>>t;
#define testcase while(t--) 
#define floop(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define um unordered_map<int,int>
#define mp make_pair
#define MOD 1000000007
#define precision(a) cout<<setprecision(a)<<fixed

int vowel(char x){
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
    return 1;
    return 0;
}

int main(){
    int t;
    testip
    testcase{
        int n,ans=INT_MAX;
        int x,y;
        cin>>n;
        string s,p;
        cin>>s>>p;
        for(char i='a';i<='z';i++){
            string s_str=s;
            string p_str=p;
            int count=0;
            for(int j=0;j<n;j++){
                if(s_str[j]=='?')
                    s_str[j]=i;
                if(p_str[j]=='?')
                    p_str[j]=i;
            }

            for(int j=0;j<n;j++){
                if(s_str[j]==p_str[j])
                    continue;
                else if(vowel(s_str[j])!=vowel(p_str[j]))
                    count+=1;
                else count+=2;
            }
            ans=min(ans,count);
        }
        cout<<ans<<endl;
    }
    return 0;
}