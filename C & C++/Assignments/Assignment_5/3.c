#include<stdio.h>
#include<math.h>

    int main(){
    int a,b,c;
    printf("Enter cofficients a,b,c - ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    while(a==0){
        printf("a cant be zero for a quadratic\nEnter correct value of a -");
        scanf("%d",&a);
    }

    int D = sqrt(b*b - 4*a*c);

    switch ((D>0) - (D<0))
    {
    case 1:
        printf("Roots are %d and %d",(-b+D)/(2*a),(-b-D)/(2*a));
        break;
    case 0:
        printf("Roots are %d and %d",(-b/2/a));
        break;
    case -1:
        printf("Imaginary Roots");
        break;
    }

    printf("\n\nJanmejai Pandey JEG254252 B4");
    return 0;
}