#include <math.h>
#include <stdio.h>
#include "include/taylor_sine.h"


void test_taylor_sine(){
    double x;
    double res;
    double own_res;
    for (int n=3; n<10; n+=2){
        for (double x=0; x<7; x++){
            res = sin(x);
            own_res = taylor_sine(x,n);
            printf("ANSI C sine is : %f for x=%f, n=%d \n", res, x, n); 
            printf("Our sine is : %f for x=%f, n=%d \n", res, x, n);
            printf("Difference is %f \n\n", fabs(res-own_res));
        }  
    }

    /*
    Det ser ud til at taylor_sine virker bedst i intervallet 0 til 3. Når n gøres større vil præcisionen på taylor_sine(x) blive
    bedre sådan at den er præcis til flere decimaler
    
    */


    // Our sine is : 0.000000 for x=0.000000, n=3 
    // Difference is 0.000000

    // ANSI C sine is : 0.841471 for x=1.000000, n=3
    // Our sine is : 0.841471 for x=1.000000, n=3
    // Difference is 0.000196

    // ANSI C sine is : 0.909297 for x=2.000000, n=3
    // Our sine is : 0.909297 for x=2.000000, n=3
    // Difference is 0.024036

    // ANSI C sine is : 0.141120 for x=3.000000, n=3
    // Our sine is : 0.141120 for x=3.000000, n=3
    // Difference is 0.383880

    // ANSI C sine is : -0.756802 for x=4.000000, n=3
    // Our sine is : -0.756802 for x=4.000000, n=3
    // Difference is 2.623469

    // ANSI C sine is : -0.958924 for x=5.000000, n=3
    // Our sine is : -0.958924 for x=5.000000, n=3
    // Difference is 11.167258

    // ANSI C sine is : -0.279415 for x=6.000000, n=3
    // Our sine is : -0.279415 for x=6.000000, n=3
    // Difference is 35.079415

    // ANSI C sine is : 0.000000 for x=0.000000, n=5
    // Our sine is : 0.000000 for x=0.000000, n=5
    // Difference is 0.000000

    // ANSI C sine is : 0.841471 for x=1.000000, n=5
    // Our sine is : 0.841471 for x=1.000000, n=5
    // Difference is 0.000000

    // ANSI C sine is : 0.909297 for x=2.000000, n=5
    // Our sine is : 0.909297 for x=2.000000, n=5
    // Difference is 0.000050

    // ANSI C sine is : 0.141120 for x=3.000000, n=5
    // Our sine is : 0.141120 for x=3.000000, n=5
    // Difference is 0.004192

    // ANSI C sine is : -0.756802 for x=4.000000, n=5
    // Our sine is : -0.756802 for x=4.000000, n=5
    // Difference is 0.095074

    // ANSI C sine is : -0.958924 for x=5.000000, n=5
    // Our sine is : -0.958924 for x=5.000000, n=5
    // Difference is 1.048554

    // ANSI C sine is : -0.279415 for x=6.000000, n=5
    // Our sine is : -0.279415 for x=6.000000, n=5
    // Difference is 7.307987

    // ANSI C sine is : 0.000000 for x=0.000000, n=7
    // Our sine is : 0.000000 for x=0.000000, n=7
    // Difference is 0.000000

    // ANSI C sine is : 0.841471 for x=1.000000, n=7
    // Our sine is : 0.841471 for x=1.000000, n=7
    // Difference is 0.000000

    // ANSI C sine is : 0.909297 for x=2.000000, n=7
    // Our sine is : 0.909297 for x=2.000000, n=7
    // Difference is 0.000003

    // ANSI C sine is : 0.141120 for x=3.000000, n=7
    // Our sine is : 0.141120 for x=3.000000, n=7
    // Difference is 0.000580

    // ANSI C sine is : -0.756802 for x=4.000000, n=7
    // Our sine is : -0.756802 for x=4.000000, n=7
    // Difference is 0.024732

    // ANSI C sine is : -0.958924 for x=5.000000, n=7
    // Our sine is : -0.958924 for x=5.000000, n=7
    // Difference is 0.457123

    // ANSI C sine is : -0.279415 for x=6.000000, n=7
    // Our sine is : -0.279415 for x=6.000000, n=7
    // Difference is 4.979162

    // ANSI C sine is : 0.000000 for x=0.000000, n=9
    // Our sine is : 0.000000 for x=0.000000, n=9
    // Difference is 0.000000

    // ANSI C sine is : 0.841471 for x=1.000000, n=9
    // Our sine is : 0.841471 for x=1.000000, n=9
    // Difference is 0.000000

    // ANSI C sine is : 0.909297 for x=2.000000, n=9
    // Our sine is : 0.909297 for x=2.000000, n=9
    // Difference is 0.000468

    // ANSI C sine is : 0.141120 for x=3.000000, n=9
    // Our sine is : 0.141120 for x=3.000000, n=9
    // Difference is 0.454171

    // ANSI C sine is : -0.756802 for x=4.000000, n=9
    // Our sine is : -0.756802 for x=4.000000, n=9
    // Difference is 60.055334

    // ANSI C sine is : -0.958924 for x=5.000000, n=9
    // Our sine is : -0.958924 for x=5.000000, n=9
    // Difference is 2659.069179

    // ANSI C sine is : -0.279415 for x=6.000000, n=9
    // Our sine is : -0.279415 for x=6.000000, n=9
    // Difference is 58896.348509
}

int main(){
    test_taylor_sine();
    return 0;
}