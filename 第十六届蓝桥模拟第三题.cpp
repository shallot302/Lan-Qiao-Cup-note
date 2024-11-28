#include <cstdio>
#include <iostream>

// 判断是否是闰年
bool is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 获取某个月的天数
int get_days_in_month(int year, int month) {
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && is_leap_year(year)) {
        return 29; // 闰年二月
    }
    return days_in_month[month - 1];
}

int main() {
    int count = 0;            // 好日期计数
    int weekday = 2;          // 1901 年 1 月 1 日是星期二（1=星期一，2=星期二，...，7=星期日）
    int year = 1901, month = 1, day = 1;

    // 遍历从 1901 年 1 月 1 日到 2024 年 12 月 31 日
    for (year = 1901; year <= 2024; year++) {
        for (month = 1; month <= 12; month++) {
            int days_in_month = get_days_in_month(year, month);
            for (day = 1; day <= days_in_month; day++) {
                // 检查是否为好日期
                if (weekday == 1 && (day == 1 || day == 11 || day == 21 || day == 31)) {
                    count++;
                }
                // 更新星期
                weekday = (weekday % 7) + 1;
            }
        }
    }

    // 输出结果
    printf("%d\n", count);
    return 0;
}

