#include"stdio.h" 
int main()
{
 int array[10]={1,2,3,4,5,6,7,8,9,10};
 int i,j,p,tmp;
 scanf("%d",&p);
 for(j=0;j<=p;j++)
 {
  tmp=array[0];
  for(i=0;i<9;i++)
  {
   array[i]=array[i+1];
  }
  array[9]=tmp;
 }
 for(i=0;i<10;i++)
 {
  printf("%d ",array[i]);
 }
 return 0;
}
