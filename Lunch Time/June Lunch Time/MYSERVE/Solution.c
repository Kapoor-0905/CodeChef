// 1 test case passed out of 2
#include <stdio.h>

int main() {
	int t,i,arr[2],j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    for(j=0;j<2;j++){
	        scanf("%d",&arr[j]);
	    }
	    if(arr[0] && arr[1] >10)break;
	    if((arr[0]+arr[1]+1)%3==0)
	    printf("Bob\n");
	    else printf("Alice\n");
	}
	return 0;
}

