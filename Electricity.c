#include <stdio.h>
int main() {
        float unit,cpu,res;  //cpu:cost per unit ,res:result
        printf("Enter no. of Units consumed:\n");
        scanf("%f",&unit);
    cpu=7;
    res=unit*cpu;
    printf("your electricity bill is :%f\n",res);
    return 0;
}
