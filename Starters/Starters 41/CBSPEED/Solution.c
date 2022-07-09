#include <stdio.h>

int main() {
    int arr[2];
    for(int i=0;i<2;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]<arr[1]) printf("YES");
    else printf("NO");
	return 0;
}

