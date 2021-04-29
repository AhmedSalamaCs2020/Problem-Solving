#include <iostream>
#include<vector>
#include <iterator>
#include <map>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    int counter=0;
    map<int ,int> maps;
for (int r=0;r<nums.size();r++){
    maps[nums[r]]++;
    }

    for (auto element:maps){
     if(element.second>1){
        counter++;
     }
    }
    if(counter==0){
        return false;
    }
    return true;
    }

int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);


   cout<<containsDuplicate(nums);
    return 0;
}
