#include <iostream.h>
 void nhap(int a[10][10], int n, int m)
 {
 int i, j;
 for (i=1; i<=n; i++)
 for (j=1; j<=m; j++)
 { 
 cout<<"a["<<i<<","<<j<<"]=";
 cin>>a[i][j];
 }
 }
 void hienthi(int a[10][10], int n, int m)
 {
 int i, j;
 for (i=1; i<=n; i++)
 {
 cout<<"\n";
 for (j=1; j<=m; j++)
 cout<<a[i][j]<<" ";
 }
 }
 main(void)
 {
 	int a[10][10],n,i,j;
 	cout<<"nhap so hang cot ";
 	cin>>n;
 	nhap(a,n,n);
 	cout<<"Ma tran la ";
    hienthi(a,n,n);
 	int max=0;
 	for (i=1; i<=n; i++)
    for (j=1; j<=n; j++)
    {
    	if (i+j>n+1,(a[i][j]>max)) 
	    if (a[i][j]>max)max=a[i][j];
    }
    cout<<"\nphan tu lon nhat la "<<max;
 }