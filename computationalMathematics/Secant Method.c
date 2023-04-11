#include<stdio.h>
#include<math.h>
float f(float x)
{
return(pow(x,3)-2*x-5);
}

void main()
{
    float a,b,c,d;
    double e=0.000001;
    int count=1;
    printf("\nEnter the values of a : ");
    scanf("%f",&a);
    printf("\nEnter the values of b : "); //(a,b) must contain the solution.
    scanf("%f",&b);


    do
    {
    if(f(a)==f(b))
    {
        printf("\nSolution cannot be found as the values of a and b are same.\n");
        return;
    }
    
    c=(a*f(b)-b*f(a))/(f(b)-f(a));
	a=b;
    b=c;
    
    printf("Iteration No - %d,  x = %f\n",count,c);
    count++;
    
    }
    
	while ((fabs(b-a))>e);
    printf("\n\The required solution is %.3f\n",c);
 


}


