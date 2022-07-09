#include <stdio.h>

int main() {
    int a,b,i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&a,&b);
        if((a+b)%2 == 0)
        printf("YES\n");
        else printf("NO\n");
    }
	return 0;
}
