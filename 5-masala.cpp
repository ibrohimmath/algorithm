#include<bits/stdc++.h>

using namespace std;

int main(){
int a,i=1,count=0;
cin>>a;
int ab=abs(a);
if(a==0) {count=-1;}    
else if(a==1) {count=2;}
else if(a==-1) {count=1;}
else
while(i*i<=ab){
if(ab%i==0) {count+=2; }
if(i*i==ab && a<0) { --count; }
i++;   
}
cout<<count;

return 0;    
}