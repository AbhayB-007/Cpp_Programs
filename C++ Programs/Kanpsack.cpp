#include<iostream>
using namespace std;

int max(int a,int b)
{
	return (a>b)?a:b;
}
int Knapsack(int weight[],int value[],int n,int max_wt)
{
   int i,w;
   int ks[n+1][max_wt+1];
   for(i=0;i<=n;i++)
   {
   	for(w=0;w<=max_wt;w++)
   	{
   	  if(i==0 || w==0 )	
   	    ks[i][w]=0;
   	  else 
	  if(weight[i]<=w)
	    ks[i][w]=max(ks[i-1][w] , ks[i-1][w-weight[i]]+value[i]);	   
	  else
	    ks[i][w]=ks[i-1][w];
	}
   }
   cout << "Max Profit will be : " << ks[i][w] << endl;
   for(i=0;i<=n;i++)
   {
   	for(w=0;w<=max_wt;w++)
   	{
   	  cout<<ks[i][w]<<" ";	   
	}
	cout<<endl;
   }
   cout<<ks[n][w];

   return 0;
}
main()
{
	// system("cls");
	int weight[]={18,15,10},value[]={25,24,15},n=3,max_wt=20;
	Knapsack(weight,value,n,max_wt);
	return 0;
}