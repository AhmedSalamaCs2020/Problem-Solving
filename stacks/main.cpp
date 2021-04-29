#include <iostream>
#include<vector>
#include <sstream>

using namespace std;
//
string makeGood(string s) {
    string newString="";
        vector <char>vec;
        for(int r=0;r<s.size();r++){
            if(!vec.empty()&&vec.back()-32==s[r]){
                      vec.pop_back();
                      }
            else{
            vec.push_back(s[r]);
                      }
        }
        //
        for(int r=0;r<vec.size();r++){
            newString+=vec[r];
        }
        //

        if(newString.size()==0){
            return "";
        }
        else if(vec.size()==1){
            std::string s(1, vec[0]);
            return  s;

    return s;
        }
        else{
            return newString;
        }

    }
int main()
{
   cout<<makeGood("abBAcC");
    return 0;
}
