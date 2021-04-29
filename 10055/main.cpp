#include <iostream>
#include <stdlib.h>     /* abs */
#include<vector>
using namespace std;

int main()
{
int n;
int r;
vector <int>element;
 cin>>n;
 for(int m=0;m<n;m++){
    cin>>r;
    for(int q=0;q<r;q++){
            int x;
            cin>>x;
        element.push_back(x);
    }
    cout<<element[r/2]<<endl;
    element.clear();
 }
    return 0;
}
