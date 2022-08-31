#include <stdio.h>

int main(){
    int t,i,x,p,q;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%d",&x,&p,&q);
        printf("%d\n",(p-q)*x);
    }
    return 0;
}
