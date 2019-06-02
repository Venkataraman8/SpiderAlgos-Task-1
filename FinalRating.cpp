#include<iostream>

using namespace std;

void final(int contest[],int eat[],int n, int x, int y)

{
	int total=0;
	for(int i=0;i<n;i++)
	{
		if(contest[i]==1)
		{
			if(eat[i]==1)
			total+=x;
			
			else 
			total-=y;
		}
	}
	
	if(total>0)
	cout<<"promoted";
	
	else if(total<0)
	cout<<"demoted";
	
	else cout<<"no change";
}

int main()
{
	int contest[109],eat[109],n,r,x,y;
	
	cin>>n>>r>>x>>y;
	
	for(int i=0;i<n;i++)
	cin>> contest[i];
	
	for(int i=0;i<n;i++)
	cin>> eat[i];
	
	final(contest,eat,n,x,y);	
}
