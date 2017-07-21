#include <iostream>
using namespace std;
int main(){
	int i,j,f1,f2,temp;
	f1=f2=temp=0;
	int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    int apple[m],orange[n];
    for(i=0;i<m;i++)
    cin>>apple[i];
    for(j=0;j<n;j++)
    cin>>orange[j];
    for(i=0;i<m;i++){
			if(apple[i]>=0){	
				temp=a+apple[i];
				if(temp<=t && temp>=s)
				f1++;
				}
			
	}
	temp=0;
	for(j=0;j<n;j++){
		if(orange[j]<=0){
			temp=b+orange[j];
			if(temp<=t &&temp>=s)
			f2++;
		}		
	}
	cout<<f1<<endl<<f2;
}
