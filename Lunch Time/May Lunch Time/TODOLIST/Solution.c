#include <stdio.h>

int main() {
	int t,n,i,arr[1000],c1=0,c2=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&n);
	    for(int j=0;j<n;j++){
	        scanf("%d",&arr[j]);
	        if(arr[j]>=1000){
	            ++c1;
	            
	        }
	        else{
	            c2++;
	        }
	    }
	    printf("%d",c1);
	    c1=0;
	    printf("\n");
	}
	return 0;
}

