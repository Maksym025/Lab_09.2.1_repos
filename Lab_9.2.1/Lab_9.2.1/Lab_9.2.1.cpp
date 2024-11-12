#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996) 
#define Z 6
#define SQR(x) ((x) * (x)) 
#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main() {
    int x, y;
    int w;

    printf("Enter value of x, y:\n");
    scanf("%d %d", &x, &y); 

#if (Z > 3) 
    w = MAX(SQR(x - Z), x - y);
#else 
    w = MAX(x * y, y * Z) + MAX(Z * x, y * Z);
#endif

    printf("The value of w: %d\n", w);
    return 0;
}
