#include <iostream>

using namespace std;


int sum(int x,int y){
    return x+y;
}

int sum2(int x){
    //add 10 to value of sum
return x+10;
}

void sum3(int num,int acculator){
cout<<num+acculator;
}

int main()
{
int x, y;
cin>>x>>y;
//
int sumValue=sum(x,y);

cout<<sum2(sumValue);

sum3(10,10);

    return 0;
}
