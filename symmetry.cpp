#include<iostream>

using namespace std;
int value=0;

int symmetry(char str[],int n)
{
	int flag=0;
	
	if(n==1)
	return value;
	
	
	for(int i=0,j=n/2;i<n/2;i++,j++)
	{	
		if(str[i]!=str[j])
		{
			flag=-1;
			break;
		}
	}
	
	if(flag==0)
	{
	value++;
	return symmetry(str,n/2);
	}
	
	else return value;
}

int main()
{
	int n; char str[1000000];
	cin>>n;
	cin>> str;
	cout<<symmetry(str,n);
}
