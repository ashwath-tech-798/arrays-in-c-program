#include<stdio.h>
int main()
{
int n,found=0;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int N;
scanf("%d",&N);
for(int i=0;i<n;i++){
if(arr[i]==N){
found=1;
printf("element found index=%d",i);
break;}
}
if(found==0){
printf("element not found");}
return 0;
}
