#include <stdio.h>

int main() {
    int t,i,x,coin;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&x);
        coin = x%10;
        printf("%d\n",coin);
    }
	return 0;
}
