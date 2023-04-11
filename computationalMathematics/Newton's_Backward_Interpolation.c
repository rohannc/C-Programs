#include<stdio.h>
#include<conio.h>

int main()
{
 float ax[20], ay[20][20], x, u, nr=1.0, dr=1.0, yp, p;
 int i, j, n, h, k;
 /* Input Section */
 printf("Enter number of data?\n");
 scanf("%d", &n);
 printf("Enter data:\n");
 for(i = 0; i < n ; i++)
 {
  printf("x[%d]=", i);
  scanf("%f", &ax[i]);
  printf("y[%d]=", i);
  scanf("%f", &ay[i][0]);
 }

 /* Generating Backward Difference Table */
 for(i = 1; i < n; i++)
 {
  for(j = n-1; j >= i; j--)
  {
   ay[j][i] = ay[j][i-1] - ay[j-1][i-1];
  }
 }

 /* Displaying Backward Difference Table */
 printf("\nBackWARD DIFFERENCE TABLE\n\n");
 for(i = 0; i < n; i++)
 {
  printf("%0.2f", ax[i]);
  for(j = 0; j <= i ; j++)
  {
   printf("\t%0.2f", ay[i][j]);
  }
  printf("\n");
  }
  
  printf("\nEnter the value of x for which the value of y is wanted: \n");
  scanf("%f",&x);
  h=ax[1]-ax[0];
  printf("h = %d\n", h);
  
  //now ax[i] is x0 and ay[i] is y0
  p = x - ax[n-1];
  u = (p/h);
  yp = ay[n-1][0];
  for(k=1;k<=n;k++)
    {
        nr *=u+(k-1);
        dr *=k;
        yp +=(nr/dr)*ay[n-1][k];
    }
  printf("\nWhen x = %f, corresponding y = %6.2f\n", x, yp);
}


















