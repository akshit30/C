#include<stdio.h>
int main(){
    char x;
    printf("enter x");
    scanf("%c",&x);

    if((x>='a'&& x<='z') || (x>='A' && x<='Z')) {
        printf("this is an alphabet");
    }
    else if(x>='0' && x<='9'){

        printf("this is a digit");
    }
    else{
        printf("this is a special character");
    }
   









  return 0;
}