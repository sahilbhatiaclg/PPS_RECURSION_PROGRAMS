#include<stdio.h>
int sumofnum(int num){
    if(num==0)
        return 0;
    return (num%10) +sumofnum(num/10);
}

int ismagic(int num){
    while(num>9){
        num=sumofnum(num);
    }

    return(num==1);    //will print 1 only if its magic
}

int main(){
    int x;
    scanf("%d",&x);
    if(ismagic(x)){
        printf("%d is a magic number.",x);
    }
    else{
        printf("%d is not a magic number.",x);
    }
    return 0;

}
