#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define du double
#define vi vector<int>
#define se set<int>
#define vvi vector<vector<int>>
const float N = 3.14;
// void substrings(string s , string ans)
// {
//     if(s.length()==0)
//     {
//         cout<<ans<<endl;
//         return ;
//     }
//     char temp = s[0];
//     int ch = temp;
//     string ros = s.substr(1);
//     substrings(ros,ans);
//     substrings(ros,ans+temp);
//     substrings(ros,ans+to_string(ch));
// }
void substrings(string s , string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    char temp = s[0];
    string ros = s.substr(1);
    substrings(ros,ans);
    substrings(ros,ans+temp);
}
string sameSTRINGsolve(string s)        // same charectors in a word filtur out
{
    if(s.length()==0)
    {
        return "";
    }
    char temp = s[0];
    string ans = sameSTRINGsolve(s.substr(1));
    if(temp == ans[0])
    {
        return ans;
    }
    else
    {
        return temp+ans;
    }
}
string xEND(string s)               //if words contains x then the x shift to the end of the words
{
    if(s.length()==0)
    {
        return "";
    }
    char temp = s[0];
    string ans = xEND(s.substr(1));
    if(temp=='x')
    {
        return ans+temp;
    }
    else
    {
        return temp+ans;
    }
    return xEND(s.substr(1));

}
void pi(string s)                   //if word contains the pi then the pi changes to 3.14
{
    if(s.length()==0)
    {
        return;
    }
    string ans ;
    if(s[0]=='p'&&s[1]=='i')
    {
        cout<<PI;
        ans = s.substr(2);
    }
    else
    {
        cout<<s[0];
        ans = s.substr(1);
    }
    pi(ans);
}
int fibonaci(int n)
{
	if(n==2)
	{
		return 1;
	}
	if(n==1)
	{
		return 0;
	}
	cout<<n-1<<" "<<n-2<<endl;
	return fibonaci(n-1)+fibonaci(n-2);
}
int recurSum(int n)
{
    if (n <= 1)
        return n;
    return n + recurSum(n - 1);
}
int digitSum(int n)
{
	if(n==0)
	{
		return 0;
	}
	int sum = digitSum(n/10) + (n%10);
	return sum;
}
int findSum(int A[], int N)
{
    if (N <= 0)
    {
        return 0;
    }
    return (findSum(A, N - 1) + A[N - 1]);
}
void print(int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}
void patprint(int n)
{
	if(n==1)
	{
		cout<<1<<endl;return;
	}
	print(n);
	patprint(n-1);
	print(n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t;cin>>t;
    while(t--)
    {
    	int n;cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i];
    	}
    	// printf("%d", findSum(a, n));
    	// cout<<digitSum(n);
    	// patprint(n);
    	cout<<fibonaci(n);
    }
    return 0;
}