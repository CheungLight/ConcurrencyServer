#include<bits/stdc++.h>
using namespace std;
int n,t,p[1000005];
int main(){
	cin>>t;while(t--){int id=1;
		cin>>n;for(int i=1;i<=n;i++)cin>>p[i];;
for(int i=1;i<=n;i++)if(p[min(n,i+1)]>=p[min(n,id+1)])id=i;
		for(int i=id+1;i<=n;i++)cout<<p[i]<<' ';cout<<p[id];
		for(int i=id-1;i>=0;i--){
			if(p[i]>p[1])cout<<' '<<p[i];
			else{
				for(int j=1;j<=i;j++)cout<<' '<<p[j];
				break;
			}
		}cout<<endl;
	}
}