#include<stdio.h>
int main(){
    int n,d,cn,s=0;
    printf("enter b");
    scanf("%d",&n);
    cn=n;
    while (n>0)
    {
        d=n%10;
        s=s+(d*d*d);
        n=n/10;


    }
    if (cn==s)
    {
        printf("n is angstrom");
    }
    else{
        printf("n not an angstrom");
    }
    
    
    


    return 0;
}