#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int firstUniqChar(string s) {
    int counter=0;
    map<char,int>map_s;
    vector <pair<char,int>> vec;
    vector <int >indexs;
    for(int r=0;r<s.size();r++)
        map_s[s[r]]++;
        //
       for(auto x:map_s)
        vec.push_back(x);
       //
       sort(vec.begin(),vec.end());
       //
       int sizeVector=vec.size();
       //
      for(int r=0;r<sizeVector;r++){
      if(vec[r].second==1){
        for(int q=0;q<s.size();q++){
            if(vec[r].first==s[q]){
                indexs.push_back(q);
            }
        }
        //
        counter++;
      }
      }
      //

      if(counter>=1){

      int min_elements =*min_element(indexs.begin(), indexs.end());
       return min_elements;}
       return -1;
    }
    //
int main()
{
   cout<<firstUniqChar("aabb");
    return 0;
}
