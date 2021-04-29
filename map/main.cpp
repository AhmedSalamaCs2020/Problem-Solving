#include <iostream>
#include <queue>
#include <bits/stdc++.h>

using namespace std;

int main()
{
string s;
cin>>s;
map<char,int>maps;
vector<pair<char,int> >vec;


for(int r=0;r<s.length();r++){
    maps[s[r]]++;
}
  for(auto x: maps)
        {
		   vec.push_back(x);
		}
		sort(vec.begin(),vec.end());
		string sFinal="";
		for(int r=0;r<vec.size();r++){
		for(int e=0;e<vec[r].second;e++){
            sFinal+=vec[r].first;
		}
		}
		cout<<sFinal;
    return 0;
}
/*string s;
cin>>s;
  map<char,int> maps;
for(int i=0; i<s.length();i++)
       {
		   maps[s[i]]++;
       }
       cout<<maps.begin()->first;
       cout<<maps.begin()->second;

*/
