    #include<iostream>
    using namespace std;
    int main()
    {
    	int t;
    	cin>>t;
    	while (t--)
    	{
    		char s;
    		string ss = "codeforces";
    		cin>>s;
    		string out = "NO";
    		for(int i=0;i<ss.size() && out == "NO";i++)
    		{
    			if(s == ss[i]) out = "YES";
    		}
    		cout<<out<<endl;
    	}
    	
    }
