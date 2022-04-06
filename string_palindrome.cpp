#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	int flag = 0;
	int n = str.size()-1;
	for(int i=0;i<n/2;i++){
		if(str[i]==str[n-i]){
			continue;
		}else{
			flag = 1;
			break;
		}
	}
	if(flag ==0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}