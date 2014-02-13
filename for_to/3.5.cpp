#include<stdio.h>
main()
{
    int i,n;
	float a[n],demd,dema,td,ta,t;
    td,ta,t,dema,dema=0;
	scanf("%d",n);
	for (i=0;i<n;i++)
	{
		scanf("%f",a[i]);
		if (a<0)
		{
			dema=dema+1;
			ta=ta+a[i];
		}
		if (a>0)
		{
			demd=demd+1;
			td=td+1;
		}
		t=t+a[i];
	}
	printf("tong so duong %f\n",demd);
	printf("tong so am %f\n",dema);
	printf("trung binh cong so duong %f\n",td/n);
	printf("trung binh cong so am %f\n",ta/n);
	printf("trung binh cong %f\n",t/n);
}