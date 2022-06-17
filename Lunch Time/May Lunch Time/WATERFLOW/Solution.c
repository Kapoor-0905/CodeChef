#include <stdio.h>

int main() {
    int t,arr[4],i,j,water;
        scanf("%d",&t);
        for(i=0;i<t;i++){
            for(j=0;j<4;j++){
                scanf("%d",&arr[j]);
            }
             water = (arr[2]*arr[3]) + arr[0];
             if(water > arr[1]) printf("overflow\n");
             else if(water == arr[1]) printf("filled\n");
             else if(water < arr[1]) printf("unfilled\n");
        }
	return 0;
}
