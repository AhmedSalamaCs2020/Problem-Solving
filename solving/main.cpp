#include <iostream>

#include <cstdio>
using namespace std;

int main()
{
 int value;
 int sum=0;
 int counter=0;

 while (cin>>value&&value!=0){
        if(counter==0)
         cout<<"PERFECTION OUTPUT"<<endl;
    for(int r=1;r<value;r++){
        if(value%r==0)
    sum+=r;
    }
   	printf("%5d  ", value);

    if(sum==value){
        cout<<"PERFECT"<<endl;
    }
    else if (sum<value){
        cout<<"DEFICIENT"<<endl;
    }
    else{
        cout<<"ABUNDANT"<<endl;
    }
    sum=0;
    counter++;
    }
  cout<<"END OF OUTPUT"<<endl;
    return 0;
}
