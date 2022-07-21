#include <stdio.h>

int main() {
    int t,i,n,k,m,bags,quo,rem;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%d",&n,&k,&m);
        bags = k*m;
        quo = n/bags;
        rem = n%bags;
        if(rem==0) printf("%d\n",quo);
        else if(rem!=0) printf("%d\n",quo+1);
    }
	return 0;
}
