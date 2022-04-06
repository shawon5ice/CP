// It can multyply any two large numbers

#include <bits/stdc++.h>
using namespace std;

string multiply(string a,string b){
	if(a=="0" || b =="0") return "0";
	vector<int>num(a.size()+b.size(),0);
	for(int i=a.size()-1;i>=0;i--){
		for(int j=b.size()-1;j>=0;j--){
			num[i+j+1] += (a[i]-'0') * (b[j]-'0');
			num[i+j] += num[i+j+1] / 10; //carry
			num[i+j+1] %=10; //current value
		}
	}
	int i =0;
	while(i<num.size() && num[i]==0){
		i++;
	}

	string res = "";
	while(i<num.size()){
		res+=num[i]+'0';
		i++;
	}
	return res;
}

int main(){
	string a,b;
	cin>>a>>b;
	string res = multiply(a,b);
	cout<<res<<endl;
}