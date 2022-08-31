#include <iostream>
using namespace std;

int main(){
    int t,i,x,y,z;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x>>y>>z;
        int fi = (x*4)+(y*2);
        cout<<fi<<"\n";
    }
}