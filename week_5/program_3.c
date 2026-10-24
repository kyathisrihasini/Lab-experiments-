#include <stdio.h>
#include <math.h>

void main() {
    float a, b, c, d, root1, root2, realPart, imagPart;
    printf("Enter a,b,c ");
    scanf("%f %f %f",&a,&b,&c);

    if(a==0){
      printf("\nnot quadratic")'
        }
  else{
    d = b*b - 4*a*c;
    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("\nRoots are real and different.");
        printf("\nRoot 1 = %.2f", root1);
        printf("\nRoot 2 = %.2f", root2);
    }
    else if (d == 0) {
        root1 = -b / (2 * a);
        printf("\nRoots are real and equal.");
        printf("\nRoot 1 = Root 2 = %.2f", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("Roots are complex and different.\n");
    }
}
}
