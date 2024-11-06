//#include <cstdio>
//#include <cmath>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int n;
//const int N = 16;
//int st[N];//记录状态0表示没选呢,1表示选并且经过if输出，2不选
//
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


//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//const int N = 15;
//int n;
//vector<vector<int>>ways;
//int st[N];//记录状态0表示没选呢,1表示选并且经过if输出，2不选
//
//void dfs(int u){
//	if(u>n){
//		vector<int> way;
//		for(int i = 1;i<=n;i++)
//			if(st[i]==1){
//				way.push_back(i);
//			}
//		ways.push_back(way);
//
//		return;
//	}
//	st[u] = 2;
//	dfs(u+1);
//	st[u]  =0;
//	st[u] = 1;
//	dfs(u+1);
//	st[u] = 0;
//}
//int main(){
//	cin>>n;
//	dfs(1);
//	for(int i = 0;i<ways.size();i++){
//		for(int j = 0;j<ways[i].size();j++){//vector边界不能被判定
//			printf("%d ",ways[i][j]);
//		}
//		puts("");
//	}
//	return 0;
//}