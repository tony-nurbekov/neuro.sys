#include <iostream>

using namespace std;

int main()
{
    int n; // ����������� ���� ������
    cin >> n;
    int count_of_ideal_numbers = 0;

    for (int x = 1; x <= n; x += 1) {
        int sum_of_divisors = 0;
        // ��������� ������������ ������������� ���������
        for (int d = 1; d <= x/2; d++) {
            // ��������, ��� ��� ������������� ��������
            if (x % d == 0) {
                // ���������, ���� ��� ���
                sum_of_divisors += d;
            }
        }
        // ���� �������� ����� ����� x, �� ��� �����������
        if (x == sum_of_divisors) {
            cout << '\t' << x << '\n';
            count_of_ideal_numbers++;
        }

    }

    cout << "Number of ideal numbers: " << count_of_ideal_numbers << '\n';
    return 0;
}
