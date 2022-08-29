#include <stdio.h>

int main() {
	int t,i,n,m,rem,dem;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d",&n,&m);
	    rem = n%m;
	    dem = n/m;
	    if(rem==0 && dem%2==0) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}