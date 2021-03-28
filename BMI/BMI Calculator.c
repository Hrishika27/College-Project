#include <stdio.h>
int main()
{
    float height,weight,bmi;
    printf ("enter height in meter and weight in kilogram : ");
    scanf ("%f%f",&height,&weight);
    bmi=weight/(height*height);
    printf ("bmi is %f\n",bmi);
    if (bmi<15)
        printf ("bmi category is starvation");
    else if (bmi>=15.1 && bmi<=17.5)
        printf ("bmi category is anorexic");
    else if (bmi>=17.6 && bmi<=18.5)
        printf ("bmi category is underweight");
    else if (bmi>=18.6 && bmi<=24.9)
        printf ("bmi category is ideal");
    else if (bmi>=25 && bmi<=25.9)
        printf ("bmi category is overweight");
    else if (bmi>=30 && bmi<=30.9)
        printf ("bmi category is obese");
    else if (bmi>=40)
        printf ("bmi category is morbidly obese");
    return 0;


}
