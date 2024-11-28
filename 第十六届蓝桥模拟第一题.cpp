#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
bool key(int n){
	if(n == 1){
		return false;
	}
	if(n == 2){
		return true;
	}
	for(int i = 2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}
	return true;
}
int main(){
	int a,b;
	for(int i = 1;i<2024;i++){
		int g = 0;
		if(2024%i == 0){
			g = i;
		}
		bool keyi = key(i);
		if(keyi == true){
			if(g == i){
				cout<<i<<endl;
			}
		}
	}
	
	return 0;
}
//#include <bits/stdc++.h>
//using namespace std;
//using ll = long long;
//vector<int>v;
//bool jj[3000]{};
//int main()
//{
//	int ans{};
//	int n = 2024;
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	for(int i=2;i<=n;i++){
//		if(!jj[i])v.emplace_back(i);
//		for(int j=0;j<v.size()&&v[j]*i<=n;j++){
//			jj[v[j]*i] = 1;
//			if(i%v[j]==0)break;
//		}
//	}
//	
//	for(int i=2;i<=n;i++){
//		if(n%i==0&&!jj[i])ans++;
//	}
//	cout << ans;
//	return 0;
//}

