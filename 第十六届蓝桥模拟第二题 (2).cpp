#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int temp = 2024,cnt = 0;
	for(;sqrt(temp) != 1;){
		temp = sqrt(temp);
		cnt++;
	}
	cout<<cnt;
}