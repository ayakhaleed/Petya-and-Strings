#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int flag=0;
    for (int i = 0; i < s1.length(); i++)
  	{
  		s1[i] = tolower(s1[i]);

  	}
  	for (int i = 0; i < s2.length(); i++)
  	{
  		s2[i] = tolower(s2[i]);
  	}
  	for (int i = 0; i < s1.length(); i++)
  	{
  		if(s1[i]>s2[i])
        {
          flag=1;
          break;
        }
        else if(s2[i]>s1[i])
        {
            flag=-1;
            break;
        }
  	}
  	cout<<flag;
    return 0;
}
