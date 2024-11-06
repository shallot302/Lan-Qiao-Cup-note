#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
const int N = 10;
int n;
int st[N];//0表示还没放数，1~n表示放了那个数
bool used[N];//ture表示用过，false表示没用过
void dfs(int u){
	if(u>n){
		for(int i =  1;i<=n;i++){
			printf("%d ",st[i]);//打印方案;
		}
		puts("");
		return;
		
	}
	//依次枚举每个分支
	for(int i=1;i<=n;i++){
		if(!used[i]){
			st[u] = i;
			used[i] = true;
			dfs(u +1);
			
			//回复现场
			st[u] = 0;
			used[i] = false;
		}
	}
}
int main(){
	cin>>n;
	dfs(1);
	return 0;
}