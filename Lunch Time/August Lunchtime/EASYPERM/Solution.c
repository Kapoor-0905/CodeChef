#include <stdio.h>

int main() {
	int t,i,n;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&n);
	    for(int j=n;j>=1;j--){
	        printf("%d ",j);
	    }
	}
	return 0;
}
