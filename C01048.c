#include <stdio.h>
#include <math.h>


int main(){
    int n;
    scanf("%d", &n);
    int a = n % 10;
    int sc = 0;
    int sl = 0;
    while(n != 0){
        n % 10;
        n /= 10;
        if(a % 2 == 0){
            sc++;
        }else{
            sl++;
        }
    }
    printf("%d %d", sc, sl);
}