#include<iostream>
using namespace std;
class knapsack {
	int m,n;// m= max capacity n=no of obj
	float p[100],w[100];
	float pw_ratio[100],x[100];
public:
	void calc();
	void get();
	void display();

};

void knapsack :: get()
{
	int i;
	cout<<"no of object";
	// enter no of obj
	cin>>n;
	// max capacity
	cout<<"max capacity";
	cin>>m;
	for(i=1;i<=n;i++)
	{
		cout<<" enter weight"<<endl;
		cin>>w[i];
		cout<<"enter profit"<<endl;
		cin>>p[i];
		pw_ratio[i] = p[i]/w[i];
		cout<<"pw_ratio = "<<pw_ratio[i]<<endl;
	}
	//sort in decending order
	for(i=1;i<n;i++)
	{
		for (int j = i+1 ; j <= n ; j++)
		{
			if(pw_ratio[i]<pw_ratio[j])
			{
				swap(pw_ratio[i],pw_ratio[j]);
				swap(p[i],p[j]);
				swap(w[i],w[j]);
			}	

		}
	}
}
void knapsack :: calc()
{
	//calcu
	int u=m,i;
	for(i=1;i<=n;i++)
		x[i]=0;
	for(i=1;i<=n;i++)
	{
		if(w[i] > u) break;
		x[i] = 1.0;
		u=u-w[i];
	}
	if(i<=n)
	{
		x[i] = u*1.0/w[i];
	}
	for(i=1;i<=n;i++)
	{
		cout<<"x["<<i<<"]="<<x[i];
	}
}

void knapsack::display()
{
	int i;
	float profit=0;
	for(i=1;i<=n;i++)
	{
		profit += p[i]*x[i];
	}
	cout<< "profit obtained is "<<profit<<endl;
}
int main()
{
	knapsack obj ;
	obj.get();
	obj.calc();
	obj.display();
}