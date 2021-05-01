#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cin>>num;
	int sum=0,rem=0;
	while(num!=0){
     rem=num%10;
     sum+=rem;
     num/=10;
	}
	cout<<"Sum of digits are "<<sum<<endl;
}