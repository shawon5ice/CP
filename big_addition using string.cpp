// It can add any two large numbers

#include<bits/stdc++.h>
using namespace std;

string addition(string a,string b){
	vector<int>num(a.size()+1,0);
	
	int n = a.size();
	int j = b.size()-1;

	while(n--){
		int c = 0;
		if(!((b[j]-'0')>=0 && (b[j]-'0')<=9)){
			c=0;
		}else{
			c = (b[j]-'0');
		}
		num[n+1] += (a[n]-'0') + c;
		num[n] += num[n+1] / 10;
		num[n+1] %=10;
		j--;
	}
	int i =0;
	while(i<num.size() && num[i]==0){
		i++;
	}

	string res = "";
	while(i<num.size()){
		cout<<num[i];
		i++;
	}
	return res;
}

int main(){
	string a,b,sum;
	cin>>a>>b;

	a.size()>b.size()? sum = addition(a,b):sum = addition(b,a);
	cout<<sum<<endl;
}