#include <iostream>
using namespace std;
int main(){
	int x1,v1,x2,v2,i,j;
    cin >> x1 >> v1 >> x2 >> v2;
    //int a[500],b[500];
	if(v1>v2){
    	while(v1>v2){
    		x1=x1+v1;
    		x2=x2+v2;
    		if(x1=x2)
    		break;
		}
		cout<<"YES"<<endl;
	}
	else
	cout<<"NO";
}
