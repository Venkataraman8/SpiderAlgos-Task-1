#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

void decompose (char num[],int n)
{
	int flag=0;
	char num1[105];
	strcpy(num1,num);
	for(int i=1;i<n-1;i++)
	{
		if(num[i]!=num[i+1])
		{
			flag=-1;
			break;
		}
	}
	
	if(flag==0)
	 cout<<"-1";
	 
	 else
	 {
	 	int i=n-1;

	 	while(num1[i]=='0')
	 	{
		 num1[i]='1';
		 i--;
	 	}
	 	num1[i]='0';
	 	
	 	
	 	
	 	i=n-1;
	 	while(num[i]=='1')
	 	{
		 num[i]='0';
		 i--;
	 	}
	 	num[i]='1';
	 	
	 	cout<<num1<<" ";
	 	cout<<num;
	 	
	 }
}

int main()
{
	char num[105];
	int n;
	
	
	
	cin>>n;

	
	cin>> num;
	
	decompose(num,n);
	
	
}


