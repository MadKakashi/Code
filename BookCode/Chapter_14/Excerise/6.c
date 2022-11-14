#include<stdio.h>
#include<math.h>

#define DISP(f,x) printf(#f "(%g) = %g\n",x,f(x))
#define DISP2(f,x,y) printf(#f "(%g,%g)=%g\n",x,y,(f((x),(y))))

// #define DISP2 (f,x,y) printf
// did not understood section b

int main(){
    DISP2(pow,3,2);
    return 0;
}