#include <iostream>
#include <stack>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){

    int testcases;
    cin>>testcases;
getc(stdin);

 //string s;
   for (int r=0;r<testcases;r++){
        //
    stack<char>stacks;
    int counter=0;
  char s[140];
   gets(s);
    //
     for(int r=0;r<strlen(s);r++){
       if(s[r]=='('||s[r]=='['){
            stacks.push(s[r]);
          }
       else if(!stacks.empty()&&(stacks.top()=='('&&s[r]==')')){
            stacks.pop();
          }
         else if(!stacks.empty()&&stacks.top()=='['&&s[r]==']'){
        stacks.pop();
         }
          else {
            counter++;
          }
    }
    //
    if(counter>0||stacks.size()>=1){
        cout<<"No"<<endl;

    }
   else{
       cout<<"Yes" <<endl;

    }


   }




    return 0;
}
