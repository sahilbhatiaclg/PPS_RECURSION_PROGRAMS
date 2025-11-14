#include<stdio.h>

int sumofsquare(int num){
    if(num==0){
        return 0;
    }
    int digit = num%10;

    return (digit*digit) + sumofsquare(num/10);
}

int ishappy(int n){
    if(n==1){
        return 1; //ishappy
    }
    if(n==4){
        return 0; //not happy
    }

    return ishappy(sumofsquare(n));
}
int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    printf("Happy numbers between %d and %d are: ",x,y);
    for(int i=x;i<=y;i++){
    if(ishappy(i)){
        printf("%d ",i);
    }
    else{
        continue;
    }
    }

    return 0;

}
