#include <stdio.h>

int main() {
	int x,y,a,t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
    scanf("%d%d%d",&x,&y,&a);
    if(a>=x && a<y)
        printf("YES\n");
    else{
        printf("NO\n");
    }
	}
	return 0;
}
