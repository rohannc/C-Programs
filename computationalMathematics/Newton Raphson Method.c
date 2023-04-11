#include<stdio.h>
#include<math.h>
float f(float x)
{
	float a,b;
	return(x*x - 5);
}
float fn(float x)
{
	return(2*x);
}
int main()
{
	int i=0;
	float xprev,h,xnew,a,F,Fn;
	printf("\n Enter the value of X0 in the equation [X1 = X0 - f(X0)/f'(X0) ] = ");
	scanf("%f",&a);
	printf("\n\tSTEP\t\tXn\t\tF(X)\t\tF'(X)\t    h=-((F(X)/F'(X))\tXn+1=Xn+h\n");
	do
	{
		xprev=a;
		F=f(xprev);
		Fn=fn(xprev);
		h=-(F/Fn);
		xnew=a+h;
		printf("\n\n \t%d\t%f\tF(X)=%f\t  F'(X)=%f\t%f\t%f",i,xprev,F,Fn,h,xnew);
		a=xnew;
		i++;
	}while(fabs(xnew-xprev)>=0.001);
	printf("\n\nThe approximate root of the equation using Newton Raphson method is = %.3f",xnew);
}
