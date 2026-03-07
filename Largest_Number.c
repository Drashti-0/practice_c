#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* large(int* n, int num) {

    int r[100];
    int index[100];

    for(int i=0;i<num;i++){
        r[i] = n[i] % 10;
        index[i] = i;
    }

    for(int i=0;i<num;i++){
        for(int j=0;j<num-1;j++){
            if(r[j] < r[j+1]){

                int temp = r[j];
                r[j] = r[j+1];
                r[j+1] = temp;

                int t = index[j];
                index[j] = index[j+1];
                index[j+1] = t;
            }
        }
    }

    for(int i=0;i<num;i++){
        printf("%d", n[index[i]]);
    }

    return 0;
}

int main(){

    int n[] = {3,30,34,5,9};
    int num = 5;

    large(n,num);

    return 0;
}