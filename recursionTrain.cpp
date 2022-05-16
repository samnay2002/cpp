#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define du double
#define vi vector<int>
#define se set<int>
#define vvi vector<vector<int>>
const int N = 100;
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