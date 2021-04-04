#include<bits/stdc++.h>
using namespace std;

vector<int> answer;
void SteppingNumbers(int n,int m)
{
	for(int i=n;i<=m;i++)
	{
	    int flag=1;// let i is stepping number
	    int prev=-1; // prev digit
        int j=i;
	    while (j>0)
	    {
		    int cur = j % 10; // last digit/ current digit
		    if (prev == -1)
		    {
			    prev = cur;
		    }
		    else
		    {
			    if (abs(prev - cur) != 1)// if condition not fulfil then i is not stepping number
				
			    {
			        flag=0;
				    break;
			    }
		    }
		    prev = cur;
		    j /= 10; // removing curr / last digit
	    }
	    if(flag==1)
	    {
	        answer.push_back(i);
	    }
	}
	
}

int main()
{
    int t;
    cin>>t;
	// number of test cases
    while(t--)
    {
        int n,m;
		answer.clear();
		// range between which we have to find stepping numbers
        cin>>n>>m;
        SteppingNumbers(n, m);
		cout<<"stepping numbers between n to m : \n";
		for(auto i:answer){
			cout<<i<<' ';
		}
		cout<<endl;
    }
	return 0;
}