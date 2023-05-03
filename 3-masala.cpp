#include<iostream>
#include<algorithm>

using namespace std;
//12345667654574674556
//21234580235125801342

string yigindi(string a,string b){
if(a.length()!=b.length()) {
if(a.length()>b.length()){
  for(int i=b.length();i<a.length();i++){
  b='0'+b;	
  }	
}
else{
	for(int i=a.length();i<b.length();i++){
	a='0'+a;	
	}
}
}
string natija="";
int dilda=0;
int sum;
reverse(a.begin(),a.end());
reverse(b.begin(),b.end());
for(int i=0;i<a.length();i++){
sum=(a[i]-'0')+(b[i]-'0')+dilda;
dilda=sum/10;
natija.push_back(sum%10+'0');	
}
if(dilda>0) natija.push_back(dilda+'0');
reverse(natija.begin(),natija.end());
return natija;
}

int main(){
string son1,son2;
cin>>son1;
cin>>son2;
cout<<yigindi(son1,son2);	
	return 0;
}