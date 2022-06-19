#include <stdio.h>

int main() {
    int arr[4],i,count=0;
    for(i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0] >= 10)
    count++;
    if(arr[1]>= 10)
    count++;
    if(arr[2]>= 10)
    count++;
    if(arr[3] >= 10)
    count++;
    printf("%d",count);
	return 0;
}

