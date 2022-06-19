#include <stdio.h>

int main() {
    int t,n,arr[4],i,j,max;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(j=0;j<4;j++){
            scanf("%d",&arr[j]);
        }
        max = arr[0];
        for(j=0;j<4;j++){
            if(arr[j]>max)
                max=arr[j];
        
        }
    printf("%d\n",max);
    }
	return 0;
}

