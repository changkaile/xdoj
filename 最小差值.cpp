#include <stdio.h>
#include<math.h>

int main()
{
    int i,j,n,a[1000],min=1000;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        for(j=0; j<i; j++)
        {
            if(abs(a[j]-a[i])<min)
                min=abs(a[j]-a[i]);
        }
    }
    printf("%d",min);
    return 0;
}
