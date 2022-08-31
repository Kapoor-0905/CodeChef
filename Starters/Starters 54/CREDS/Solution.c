#include <stdio.h>

int main(){
    int t,i,x,y,z;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%d",&x,&y,&z);
        int fi = (x*4)+(y*2);
        printf("%d\n",fi);
    }
}