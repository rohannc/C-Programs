#include<stdio.h>
#include<conio.h>
#include<math.h>

/* Main function */
int main()
{
 float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e, A[20][20];
 int i, j, count=1;
 
 printf("\nEnter the elements of augmented matrix row-wise:\n");
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=(3+1); j++)
        {
            printf(" A[%d][%d]:", i,j);
            scanf("%f", &A[i][j]);
        }
    }

 printf("Enter tolerable error:\n");
 scanf("%f", &e);


 
 printf("\nCount\tx\ty\tz\n");
 do
 {
  /* Calculation */
  x1 = (1/A[1][1])*(A[1][4] - A[1][2]*y0 - A[1][3]*z0);
  y1 = (1/A[2][2])*(A[2][4] - A[2][1]*x0 - A[2][3]*z0);
  z1 = (1/A[3][3])*(A[3][4] - A[3][1]*x0 - A[3][2]*y0);
  printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count, x1,y1,z1);

  /* Error */
  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);

  count++;

  /* Set value for next iteration */
  x0 = x1;
  y0 = y1;
  z0 = z1;
 }while(e1>e && e2>e && e3>e);
 printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count, x1,y1,z1);

 printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);

}
