#include <stdio.h>
#define N 10                 /*查找鞍点*/
#define M 10
void main()
{   
    int i,j,k,m,n,flag1,flag2,a[M][N],max,maxj;
    printf("输入行数n:");
    scanf("%d",&n);
    printf("输入列数m:");
    scanf("%d",&m);
    for(i=0;i<n;i++)
 {
  printf("请输入第%d行:",i+1);
  for(j=0;j<m;j++) 
   scanf("%d",&a[i][j]);
 }
 printf("\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++) 
   printf("%5d",a[i][j]);
  printf("\n");
 }
    flag2=0;
    for(i=0;i<n;i++)
 { 
  max=a[i][0];
        for(j=0;j<m;j++)
   if(a[i][j]>max)
   {
    max=a[i][j];
    maxj=j;
   }
  for(k=0,flag1=1;k<n&&flag1;k++)
            if(max>a[k][maxj])
    flag1=0;
   if(flag1)
   {
    printf("\n第%d行，第%d列的%d是鞍点\n",i+1,maxj+1,max);
    flag2=1;
   }
 }
    if(!flag2)
        printf("\n矩阵中无鞍点!\n");
}