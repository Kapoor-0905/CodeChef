#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        float n, x, y, a, b;
        scanf("%f%f%f%f%f", &n, &x, &y, &a, &b);
        float pet = x/a;
        float die = y/b;
        if (pet<die) printf("Petrol\n");
        else if (pet>die) printf("Diesel\n");
        else printf("Any\n");   
    }
}
