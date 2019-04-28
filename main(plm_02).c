#include <stdio.h>
long long int a[10000000],b[10000000];
int main()
{
    long long int i,n,L1=0,l,h=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
	scanf("%lld%lld",&a[i],&b[i]);
    }
    for(i=0;i<(n-1);i++)
    {
	if((a[i+1]>a[h])&(b[i+1]>b[h]))
	{
	if((b[i+1]-b[h])<(a[i+1]-a[h]))
	{
		l=((a[i+1]-a[h])*(a[i+1]-a[h]))+((b[i+1]-b[h])*(b[i+1]-b[h]));
		if(L1<l)
		{
			L1=l;
			h=i+1;
		}
	}
    }
    }
    printf("%lld\n",L1);
    return 0;
}
