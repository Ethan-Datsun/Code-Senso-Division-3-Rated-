#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        cin>>s;
        int n=0;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        n+=((s[i]-'a')+1)*(i+1);
        cout<<n<<endl;
    }
	
	return 0;
}
