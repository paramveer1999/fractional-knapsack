#include<stdio.h>
#include<conio.h>
void swap(float *x,float *y)
{
float t;
t=*x;
*x=*y;
*y=t;
}
void main()
{
float weight[10],value[10];
int i,j,n,a[10],capacity;
float ratio[10],pt,x[10];
clrscr();
printf("enter the number of itmes");
scanf("%d",&n);
printf("enter the value for weight and value of each item");
for(i=0;i<n;i++)
{
a[i]=i+1;
printf("\n a[%d]",a[i]);
scanf("%f",&weight[i]);
scanf("%f",&value[i]);
}
for(i=0;i<n;i++)
{
ratio[i]=value[i]/weight[i];
printf("%f",ratio[i]);

}
 ## arranging the items in descending order of their ratio
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(ratio[j]<ratio[j+1])
{
swap(&ratio[j],&ratio[j+1]);
swap(&value[j],&value[j+1]);
swap(&weight[j],&weight[j+1]);
}}}

printf("Enter the capacity of knapsack");
scanf("%d",&capacity);
 ##adding the items in knapsack
pt=0;
for(i=0;i<n;i++)
{
if(weight[i]<=capacity)
{
pt=pt+value[i];
capacity=capacity-weight[i];
}


else if(weight[i]>capacity)
{

x[i]=(capacity*1.0/weight[i])*value[i];
printf("%f",x[i]);
pt=pt+x[i];
 }

else
{}
}
printf("maximum profit is %f",pt);
getch();
}
