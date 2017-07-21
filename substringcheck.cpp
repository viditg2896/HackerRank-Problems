#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string ch[n];
	int i,j;
	for(i=0;i<n;i++){
		cin>>ch[i];
	}
	char c1[100000],c2[100000];
	for(i=0;i<n;i++){
		strcpy(c1,ch[i].c_str());
		strcpy(c2,ch[i+1].c_str());
		for(j=0;j<ch[i].length() || j<ch[i+1].length();j++){
			if(c1[j]==c2[j]){
				
			}
		}
	}
}
