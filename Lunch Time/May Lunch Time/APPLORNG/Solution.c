#include <stdio.h>

int main(void) {
	int n,arr[2];
	scanf("%d",&n);
	for(int i=0;i<2;i++){
	    scanf("%d",&arr[i]);
	}
	if((arr[0] + arr[1] )<= n){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	return 0;
}
