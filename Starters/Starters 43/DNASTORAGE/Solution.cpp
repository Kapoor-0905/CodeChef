#include <iostream>

using namespace std
  
int main() {
    int t,i,j,len;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>len;
        char arr[len];
        cin>>a;
        for(j=0;arr[j]!='\0';j=j+2){
            if((arr[j] == '0') && (arr[j+1]== '0')) 
            cout<<'A';
            else if((arr[j] == '0') && (arr[j+1]== '1')) 
            cout<<'T';
            else if((arr[j] == '1') && (arr[j+1]== '0')) 
            cout<<'C';
            else if((arr[j] == '1') && (arr[j+1]== '1')) 
            cout<<'G';
        }
        cout<<'\n';
    }
	return 0;
}

