#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		 long long int n,input,i,flag=0;
		 vector< long long int> v;
	     cin>>n;
	   
		
		for(i=0;i<n;i++)
		{
			cin>>input;
			v.push_back(input);
		}
		sort(v.begin(),v.end());
		for(i=0;i<n-1;i++)
		{
		
			
			if(v[i] == v[i+1])
			{
				flag = 1;
				
				break;
			}
		    
		}
		if(flag==1)
		cout<<"Yes"<<endl;
		if(flag==0)
		cout<<"No"<<endl;
		
	v.clear();
		
     }
return 0;
    
    
 }
