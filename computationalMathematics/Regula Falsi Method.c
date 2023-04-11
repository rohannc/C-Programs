#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float);

float f(float x)
{
    return (x*x*x-x- 1);
}


int main()
{
    float e=0.001,an,bn;
	double xn,xn1,fa,fb,fx;
	int ctr = 1;
    
	printf("Enter the value of an : ");
	scanf("%f",&an);
    printf("\nEnter the value of bn : ");
    scanf("%f",&bn);
        
    while(1)
    {
	if(f(an)*f(bn) < 0)
	{
		break;
	}	
	else
	{
		printf("You have chosen the wrong value. The root does not lie in the intermediate between the function f(a) and f (b).\nPlease choose again :\n");
	    printf("Enter the value of an : ");
        scanf("%f",&an);
        printf("\nEnter the value of bn : ");
        scanf("%f",&bn);
		
	}
    }

    xn1=bn+((f(bn)*(an-bn))/((f(bn))-(f(an))));
    do
    {
        xn=xn1;
        fa=f(an);
        fb=f(bn);
        fx=f(xn);
        if(fx<0)
        {
            if(fa<0)
            {
                an=xn;
            }
            else
            {
                bn=xn;
            }
        }
        else
        {
            if (fa>0)
            {
                an=xn;
            }
            else
            {
                bn=xn;
            }
        }
        xn1=bn+((f(bn)*(an-bn))/((f(bn))-(f(an))));
        //float product=(f(an)*f(bn));
        
		printf("The value after %dth itertaion is %.4f\n", ctr, xn1);
		ctr++;
    }
    
while ((xn1-xn)>=e);
printf("The root is %.3f",xn1);
}


