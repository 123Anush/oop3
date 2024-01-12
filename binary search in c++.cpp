#include<iostream>
#define max 10
using namespace std;
int main()
{
	int a[max] , n , i ,flag =0 ,low = 0,high = max-1 ,mid,key;
	cout<<"ENTER THE SIZE OF ARRAY :";
	cin>>n;
	for(i =0;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<"ENTER THE KEY VALUE TO BE SEARCH THE ELEMENT IN THE ARRAY ";
	cin>>key;
	while(low<=high)
	{
		mid = (low+high)/2;
		if(key == a[mid])
		{
			flag = 1;
			break;
		}
		else if(a[mid]<key)
		{
			low = mid+1;
		}
		else
	    {
		   	high = mid-1;
		}
	}
			  if(flag == 1)
			  	cout<<"THE KEY IS FOUND :)";
			  else
			  	cout<<"	THE KEY IS NOT FOUND :(";
	}

