#include <stdio.h>

int main() {
    int t,i,a,b,c,avg1,avg2,avg3;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%d",&a,&b,&c);
        avg1 = (a+b)/2;
        avg2 = (b+c)/2;
        avg3 = (a+c)/2;
        if(avg1>=35 && avg2>=35 && avg3>=35) printf("PASS\n");
        else printf("FAIL\n");
    }
	return 0;
}
