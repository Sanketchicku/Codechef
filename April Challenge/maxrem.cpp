#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{  
	unsigned long int a,n,i,size;
	vector<unsigned long int>h;
	cin>>n;
	for(i=0;i<n;i++)
	{   
		cin>>a;
		h.push_back(a);
	}
		
	sort( h.begin(),h.end() );
	size = h.size();
	
	if(h[size-2]==h[size-1]){
	   
	    
	    size=size-1;
	    
	    
	}

   
   
	cout<<h[size-2]%h[size-1];
	h.clear();
   
return 0;
}
