#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
	    int x;
	    cin>>x;
	    if(x%2==0)
	        cout<<x<<endl;
	    else
	        cout<<x+2<<endl;
	}   
	return 0;
}
