#include <stdio.h>

int main(){
    int a,b ;
    a = 1 , b = 0;
    printf("%d",AndOP(a,b));
}



int AndOP(int x,int y){
    if (x <= 1) {
        if (y <= 1) {
            return 0 ;
        }
    }
    else {
        return 0 ;
    }
}

