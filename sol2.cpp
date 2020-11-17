#include <iostream>
#include <string>
#include <algorithm>
#include<map>
using namespace std;
int main()
{
	string s1 = "XYYZXZYZXXYZ";
	string s2 = "XYZ";

	if(s2.length()>s1.length())
    {
        cout<<"-1"<<endl;
    
    }
    else
    {
        for(int i=0;i<=s1.length()-s2.length();i++)
        {
            if (is_permutation(s1.begin() + i, s1.begin() + i + s2.length(), s2.begin()))
		{
			cout <<"substring "  s1.substr(i,s2.length()) <<" present at index "<<i<<endl;
					
		}

        }
    }
    

	return 0;
}
