// [programm 2
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],wt[n];
	for(int i=0;i<n;i++)
	{cin>>a[i];
	int sum=0;
	int sq=sqrt(a[i]);
	 if(sq*sq==a[i])
	 	sum+=5;
	if(a[i]%4==0&&a[i]%6==0)
	sum+=4;
	if(a[i]%2==0)
	sum+=3;
	wt[i]=sum;
	 }
	 for(int i=0;i<n;i++)
	 {
	 	for(int j=i+1;j<n;j++)
	 	{
	 		
	 		if(wt[i]<wt[j]){
	 			{
	 				int t=wt[i];
	 				wt[i]=wt[j];
	 				wt[j]=t;
	 				int p=a[i];
	 				a[i]=a[j];
	 				a[j]=p;
				 }
			 }
		 }
	 }
	 for(int i=0;i<n;i++){
	 	cout<<"<"<<a[i]<<"its_weight"<<wt[i]<<">,";
	 }
}
