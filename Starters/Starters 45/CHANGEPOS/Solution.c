#include <stdio.h>

int main() {
    int t,i,arr[4],j;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        for(j=0;j<4;j++){
            scanf("%d",&arr[j]);
        }
        if(arr[0] != arr[2] && arr[1] !=arr[3]) printf("1\n");
            else printf("2\n");
    }
	return 0;
}

