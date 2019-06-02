#include<iostream>

using namespace std;



void function(int arr[],int i,int a,int b)
{
	//Check in the order 10,16,8 to prevent ambiguity
	
	if(a%43==0 && b%43==0)
	{
		arr[i]=a/43;
		arr[i+1]=43;
		arr[i+2]=b/43;
	}
	
	else if(a%10==0 && b%10==0)
	{
		arr[i]=a/10;
		arr[i+1]=10;
		arr[i+2]=b/10;
	}
	
	else if(a%16==0 && b%16==0)
	{
		arr[i]=a/16;
		arr[i+1]=16;
		arr[i+2]=b/16;
	}
	
	
	
	
	else if(a%8==0 && b%8==0)
	{
		arr[i]=a/8;
		arr[i+1]=8;
		arr[i+2]=b/8;
	}
	else if(a%9==0 && b%9==0)
	{
		arr[i]=a/9;
		arr[i+1]=9;
		arr[i+2]=b/9;
	}
	else if(a%7==0 && b%7==0)
	{
		arr[i]=a/7;
		arr[i+1]=7;
		arr[i+2]=b/7;
	}
	
	
	
	
	
	

	
}

int main(){
	int arr[6],p1,p2,p3,p4;
	cout<<"0 and 1 : ";
	cin>> p1;
	cout<<"1 and 2 : ";
	cin>> p2;
	cout<<"3 and 4 : ";
	cin>> p3;
	cout<<"4 and 5 : ";
	cin>> p4;
	
	function(arr,0,p1,p2);
	function(arr,3,p3,p4);	
	
	for(int j=0;j<6;j++)
	cout<<arr[j]<<" ";
	
}
