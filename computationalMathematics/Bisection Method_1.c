#include<stdio.h>
#include<math.h>


double F( double x) //Function definition
{
//This return the value of the Function
return (pow(x,2)-8);
}


int main()
{
	float x, y, temp;
printf("This program illustrates the bisection method in C:\n");

printf(" f(x) = x^2 - 8");
double x0,x1;


printf("\nEnter the first approximation to the root : ");
scanf("%lf",&x0);


printf("Enter the second approximation to the root : ");
scanf("%lf",&x1);

while(1)
{
	if(F(x0)*F(x1) < 0)
	{
		break;
	}	
	else
	{
		printf("You have chosen the wrong value. The root does not lie in the intermediate between the function f(a) and f (b).\nPlease choose again :\n");
		printf("\nEnter the first approximation to the root : ");
        scanf("%lf",&x0);


        printf("Enter the second approximation to the root : ");
        scanf("%lf",&x1);
		
	}
}



int ctr = 1;
double l1 = x0;
double l2 = x1;
double r,f1,f2,f3;


//We check if the initial approximations are the root or not
if(F(l1)==0)// it is a root
r = l1;
else if(F(l2)==0)
r = l2;
else //If the above two values are not the roots of the given function
{
while(1)

{
//This is an implementation of the algorithm mentioned above
f1 = F(l1);
if(ctr>1)
{
temp = r;
}
r = (l1+l2)/2.0; //Returns a double value
f2 = F(r);
f3 = F(l2);


if(f2 == 0)
{
    printf("The root after %d iteration is %lf\n",ctr,r);
    break; //Execution moves out of the while loop to the statement just after it
}
else
{
    printf("The root after %d iteration is %lf\n",ctr,r);
}


if(f1*f2 < 0)//Both are of opposite sign
{
l2 = r;
}
else if(f2*f3 < 0)
{
  l1 = r;
}
  if(ctr>1)
  {
		x=fabs(temp-r);
		if(x<0.0005)
  {
  	break;
		}
	}
ctr++;
}
}


    printf("\nThe approximation to the root is %.3lf\n",r); //Gives the final value after mentioned iteration


return 0;

}

