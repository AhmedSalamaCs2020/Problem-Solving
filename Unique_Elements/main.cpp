#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int sumOfUnique(vector<int>& nums) {
    int sum=0;
    map<int ,int> maps;
for (int r=0;r<nums.size();r++){
    maps[nums[r]]++;
    }

    for (auto element:maps){
     if(element.second==1){
        sum+=element.first;
     }
    }
  return  sum;
    }
int main()
{   //1,2,3,2
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(2);


   cout<< sumOfUnique(vec);
    return 0;
}
