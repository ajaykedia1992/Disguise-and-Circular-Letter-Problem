#include<iostream>
#include<string>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		int N,o=25;
		int count=0,count1=0;
		cin>>N;
		string s;
		cin>>s;
		string s1=s;int g=26;
		for(int j=97;j<123;j++)
		{
			char c=(char)j;
			int l=0;int m=0;
			if(c!='z')
			{
				for(int k=0;k<s.length();k++)
				{
					if(s[k]==c)
					{
						if((int)s1[k]+l>122)
						{
							s1[k]=s1[k]+l-g;
							//g--;
							l++;
						}
						else
						{							
						s1[k]=s1[k]+l;
						l++;
			 			}
					}
				}		
			}
			else
			{	
				for(int k=0;k<s.length();k++)
				{
					if(count==0)
					{				
						if(s[k]=='z')
						{
							s1[k]=s1[k]-(m);
							count++;		
						}
					}
					else
					{			
						if(s[k]=='z')
						{
							s1[k]=s1[k]-(o);
							o--;		
						}
					}
				}
			}	
		}
	/*	for(int x=0;x<s1.length();x++)
		{
			if((int)s1[x]>122)
			{
				s1[x]=s1[x]-g;
				g--;
			}
		}*/
		cout<<s1;
	}
	return 0;
}
