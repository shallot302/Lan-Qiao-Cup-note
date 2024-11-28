#include <cstdio>
#include <iostream>
using namespace std;
bool is_leap_year(int n){
	return (n%4 == 0&& n%100!=0||n%400 == 0);
}
int gets_days_in_month(int year,int month){
	int normal_days_in[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if(is_leap_year(year)&&month == 2){
		return 29;
	}
	return normal_days_in[month-1];
}
int main(){
	int cnt = 0;
	int weekday = 2;
	int year = 1901,month = 1,day = 1;
	for(int year = 1901;year<=2024;year++){
		for(int month = 1;month<=12;month++){
			int days_in_month = gets_days_in_month(year,month);
			for(int day = 1;day<=days_in_month;day++){
				if(weekday == 1 && (day == 1||day == 21||day == 11||day == 31)){
					cnt++;
				}
				weekday = (weekday%7) +1;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}