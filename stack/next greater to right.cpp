#include <bits/stdc++.h>using namespace std;int main(){	#ifndef ONLINE_JUDGE	freopen("input.txt", "r", stdin);	freopen("output.txt","w", stdout);	#endif	int n,t=1,i,j,k;	n=4;	int v[] = {4,3,2,1};	vector<int> res;	stack<int> st;	// st.push(v[n-1]);// traversing from right to left	for(i=n-1 ; i >= 0 ; i--)	{	// cout<<v[i];		if (st.size() == 0)		{			res.push_back(-1);		}		else if (v[i]<st.top() && st.size()>0 )		{			res.push_back(st.top());		}		else if(v[i] > st.top() && st.size()>0 )			{				while(v[i] >= st.top() && st.size() > 0 )				{					st.pop(); 				}				if (st.size() == 0)				{						res.push_back(-1);				}else{					res.push_back(st.top());				}			}		st.push(v[i]);	}	n=res.size();	for (int i = 0; i < n; ++i)	{		cout<< res[i] << "   ";	}}