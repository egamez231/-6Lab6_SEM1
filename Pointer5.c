#include <stdio.h>

double CalcFunc ( double, double, double, double*, double*);
void Result (double , double);

int  main()
{
    double l, w, h, V, SA;

    printf("Enter Height Value:");
    scanf("%lf", &h);
    printf("Enter Width Value:");
    scanf("%lf", &w);
    printf("Enter Length Value:");
    scanf("%lf", &l);

    CalcFunc (l, w, h, &V, & SA);
    Result (V, SA);
}

double CalcFunc ( double length, double width, double height, double *Vol, double *SurArea  )
{
    *Vol = length * width * height;
    *SurArea = ((width * height)*2)+ ((height * length)*2)+ ((width * length)*2) ;

    return *Vol, *SurArea;
}

void Result (double Volume , double Surface_Area)
{
    printf ("\n Volume for the Rectangular is : %.2lf ", Volume);
    printf ("\n Surface Area for the Rectangular is : %.2lf ", Surface_Area);
}
