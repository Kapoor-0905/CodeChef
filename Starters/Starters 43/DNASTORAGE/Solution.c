#include <stdio.h>

int main() {
    int t,i,j,len;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&len);
        char arr[len];
        scanf("%s",arr);
        for(j=0;arr[j]!='\0';j=j+2){
            if((arr[j] == '0') && (arr[j+1]== '0')) 
            printf("A");
        else if((arr[j] == '0') && (arr[j+1]== '1')) 
        printf("T");
        else if((arr[j] == '1') && (arr[j+1]== '0')) 
        printf("C");
        else if((arr[j] == '1') && (arr[j+1]== '1')) 
        printf("G");
        }
        printf("\n");
    }
    
	return 0;
}

