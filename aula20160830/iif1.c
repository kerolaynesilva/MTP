#include <stdio.h>
#include <stdlib.h>  //RAND_MAX
#include <time.h>
#include <float.h>
int main(){
    srand(time(0));
    int i;
    for(i=0;i<10;i++)
    printf("%f\n", (float)rand()/RAND_MAX); //rand();
    printf("%.30lf %.30lf\n", DBL_EPSILON/4.0, pow(2.,-54));
    printf((1==1-DBL_EPSILON/4.0)? "igual\n" : "diferente\n");
    return 0;
}

