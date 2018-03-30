//3.cpp
#include<bits/stdc++.h>
using namespace std;
static int endi,endj;
int chech(string a[],string str,int i,int j,int count){
	if(i>=5||j>=5||str[count]!=a[i][j])
	return 0;
	if(count==str.length()-1){
		endi=i;
		endj=j;
	    return 1;
	}
	return (chech(a,str,i+1,j,count+1)||chech(a,str,i,j+1,count+1));
}
int main(){
	string a[5]={"weLCO",
                 "TEOZ",
                 "OHROO",
                 "RPRPA",
                 "TIOn#"
				 };
				 
				 string str;
				 cin>>str;
				 int k=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		 {     
				if(str[0]==a[i][j]){
					if(chech(a,str,i,j,0)){
						cout<<i<<j<<" "<<endi<<endj;
					}
				}
			}
	}}
	return 0;
}
