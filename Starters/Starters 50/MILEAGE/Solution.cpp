#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++){
        float n, x, y, a, b;
        cin>>n>>x>>y>>a>>b;
        float pet = x/a;
        float die = y/b;
        if (pet<die) cout<<"Petrol"<<"\n";
        else if (pet>die) cout<<"Diesel"<<"\n";
        else cout<<"Any"<<"\n";   
    }
}
