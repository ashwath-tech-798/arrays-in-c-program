#include<stdio.h>
int main()
{
int n ,sum=0;
float average;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
sum=sum+arr[i];
average=sum/n;
}
printf("%f",average);

return 0;

}
