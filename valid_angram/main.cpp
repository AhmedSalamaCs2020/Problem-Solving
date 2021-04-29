#include <iostream>
#include <bits/stdc++.h>

using namespace std;
   bool isAnagram(string s, string t) {
       if(s.size()==t.size()){
        map<char,int>map_s;
        map<char ,int>map_t;
        vector<pair<char ,int>>vector_s;
        vector<pair<char ,int>>vector_t;

        for(int r=0;r<s.size();r++){
            map_s[s[r]]++;
            map_t[t[r]]++;
        }
        //
        for(auto x:map_s){
           vector_s.push_back(x);
        }
        for(auto x:map_t){
        vector_t.push_back(x);
        }
        //
        sort(vector_s.begin(),vector_s.end());
        sort(vector_t.begin(),vector_t.end());
        //
        int c=0;
      for(int r=0;r<vector_s.size();r++){
        if(vector_s[r].second==vector_t[r].second){
            c++;
        }
      }
      if(c==vector_s.size())
            return true;
        else
            return false;
    }
    return false;
    }

int main()
{
    string s,t;
    s="rat";
    t="cat";
 cout<<isAnagram(s,t);
    return 0;
}
