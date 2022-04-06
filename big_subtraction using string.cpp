#include<bits/stdc++.h>
using namespace std;

string subtraction(string a,string b){
	vector<int>res(a.size()+1,0);
	int n = a.size();
	int j = b.size()-1;

	while(n--){
		int c = 0;
		if(!(b[j]-'0'>=0 && b[j]-'0'<=9)){
			c = 0;
		}else{
			c = b[j]-'0';
		}
		res[n+1] =  (a[n]-'0' < c)? (10+(a[n]-'0')) - c: (a[n]-'0')-c;
		a[n-1] = (a[n]-'0' < c)? a[n-1]-1:a[n-1];
		j--;
	}
	int i =0;
	while(i<res.size() && res[i]==0){
		i++;
	}

	string sub = "";
	while(i<res.size()){
		sub.push_back(res[i]+'0');
		i++;
	}
	return sub.size()==0?"0":sub;

}

int main(){
	string a,b;
	cin>>a>>b;
	string sub = subtraction(a,b);
	cout<<sub<<endl;
}