//#include <cstdio>
//#include <cmath>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int n;
//const int N = 28;
//int st[N];//记录状态0表示没选呢,1表示选并且经过if输出，2不选
//bool used[N];
//
//void dfs(int u){
//	if(u > n){
//		for(int i = 1;i<=n;i++){
//			if(st[i]==1) printf("%d ",i);
//		}
//		printf("\n");
//		return;
//	}
//	st[u] = 2;//不选
//	dfs(u+1);//下一次循环
//	st[u] = 0;//恢复现场
//	st[u] = 1;//选
//	dfs(u+1);//跳到下个循环
//	st[u] = 0;//回复现场
//}
//int main(){
//	cin>>n;
//	dfs(1);//dfs从1开始
//	return 0;
//}




#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
const int N = 30;
int way[N];
int n,m;
void dfs(int u,int start){
	if(u == m+1){
		for(int i = 1;i<=m;i++) printf("%d ",way[i]);
		puts("");
		return;
	}
	for(int i = start;i<=n;i++){
		way[u] = i;
		dfs(u+1,i+1);
	}
}
int main(){
	scanf("%d%d",&n,&m);
	dfs(1,1);
	return 0;
}

