#include <stdio.h>
//friendly number is number whose abundance-number itself is equal
int abundance(int num){
    int sum=0;
    for(int i=1;i<(num/2);i++){
        if(num%i==0){
            sum += i; 
        }
    }
    return sum-num; 
}


int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);

    int a=abundance(x);
    int b=abundance(y);

    if(a==b){
        printf("%d and %d are friendly pairs.",x,y);
    }
    else{
        printf("%d and %d are not friendly pairs.",x,y);
    }
    return 0;
}
