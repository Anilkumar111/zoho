//1: programm
#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int len=str.length();
	for(int i=0;i<str.length();i++)
	{
		for(int j=0;j<str.length();j++)
		{
			if(i==j){
			cout<<str[i];}
			else if(j==str.length()-i-1)
			cout<<str[j];
			else cout<<" ";
		}cout<<endl;
	}
}
