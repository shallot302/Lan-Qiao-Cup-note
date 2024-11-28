#include <cstdio>
#include <iostream>

// �ж��Ƿ�������
bool is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// ��ȡĳ���µ�����
int get_days_in_month(int year, int month) {
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && is_leap_year(year)) {
        return 29; // �������
    }
    return days_in_month[month - 1];
}

int main() {
    int count = 0;            // �����ڼ���
    int weekday = 2;          // 1901 �� 1 �� 1 �������ڶ���1=����һ��2=���ڶ���...��7=�����գ�
    int year = 1901, month = 1, day = 1;

    // ������ 1901 �� 1 �� 1 �յ� 2024 �� 12 �� 31 ��
    for (year = 1901; year <= 2024; year++) {
        for (month = 1; month <= 12; month++) {
            int days_in_month = get_days_in_month(year, month);
            for (day = 1; day <= days_in_month; day++) {
                // ����Ƿ�Ϊ������
                if (weekday == 1 && (day == 1 || day == 11 || day == 21 || day == 31)) {
                    count++;
                }
                // ��������
                weekday = (weekday % 7) + 1;
            }
        }
    }

    // ������
    printf("%d\n", count);
    return 0;
}

