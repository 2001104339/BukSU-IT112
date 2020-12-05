#include <stdio.h>
#include <stdlib.h>

int main()
{

    int v, v2, max, dibidibay;
    v = 1;
    v2 = 1;

    printf("Enter a number range: ");
    scanf("%d", &max);

    do{
        dibidibay = v % 3;


        if( dibidibay != 0 ){

            printf("%d\t ", v);

            if( dibidibay != 0 ){

                v2 = v2 + v;
            }

            v++;
        }else{
            v++;
        }

    }while(v <= max);
    printf("\n\n%d is the sum of the numbers non-divisible by 3\n\n\n", v2);
}
