#include <stdio.h>
int gcd(int x,int y){
    //finding gcd using eucliers formula
    if(y==0) return x;
    
    return gcd(y,x%y);
    

}
int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);

    if (x<0)
    x=-x;
    if (y<0)
    y=-y;

    printf("GCD: %d",gcd(x,y));

    return 0;
}
