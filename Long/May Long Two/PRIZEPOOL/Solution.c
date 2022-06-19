#include <stdio.h>

int main() {
	int t,i,arr[2],j,rank=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    for(j=0;j<2;j++){
	        scanf("%d",&arr[j]);
	    }
	    rank = (arr[0]*10) + (arr[1]*90);
	    printf("%d\n",rank);
	}
	return 0;
}

