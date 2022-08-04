#include <ssctdlib>
#include <iostream>

int main() {
    int t,i,x,y,dif;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x>>y;
        dif = abs(x-y);
        if(dif%2==0){
            cout<<dif/2<<"\n";
        }
        else{
            cout<<(dif/2)+1<<"\n";
        }
    }
	return 0;
}
