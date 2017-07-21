#include <iostream>
using namespace std;
int main(){
	int n,k,i,t,flag;
	cin>>n;
	char s[n];
	cin>>s;
	cin>>k;
	int a[n];
	for(i=0;i<n;i++){
		a[i]=(int)s[i];
	}
	for(i=0;i<n;i++){
		if(a[i]>=65 && a[i]<=90){
			if(a[i]+k>90){
				t=a[i]+k-90;
				if(t<=26)
				a[i]=65+t-1;
				else 
				{
					do
					{
						t-=26;
						if(t>26)
						flag=1;
						else
						flag=0;
					}while(flag!=0);	
					  a[i]=65+t-1;
				}
		}
		else
		a[i]+=k;
	}
		if(a[i]>=97 && a[i]<=122){
			if(a[i]+k>122){
				t=a[i]+k-122;
				if(t<=26)
				a[i]=97+t-1;
				else 
				{
					do{
						t-=26;
						if(t>26)
						flag=1;
						else
						flag=0;	
					}while(flag!=0);
					  a[i]=97+t-1;
				}
		}
		else
		a[i]+=k;
}
}
for(i=0;i<n;i++){
	cout<<(char)a[i];
}
return 0;
}
