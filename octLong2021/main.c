#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int p;
    if(n<m){
        p=m;
    }
    else{
        p=n;
    }
    printf("%d",p);
}