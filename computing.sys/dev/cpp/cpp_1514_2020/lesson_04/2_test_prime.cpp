#include <iostream>
using namespace std;

int main()
{
    int64_t x;
    cin >> x;
    if (x <= 1) {   // �� ����� ��� ���������������� ���� (�� ����������)
        cerr << "ERROR: x should not be negative!\n";
        exit(1);
    }

    bool is_prime = true;
    int64_t d = 2;
    while (d * d <= x) // ���������� �������� ������������� ��������
    {
        if (x % d == 0) {
            is_prime = false;
            break; // ����� ��� �� ������� - ������ ������ �� �����
        }
        d += 1;
    }
    cout << "Number is " << (is_prime ? "" : "not ") << "prime.\n";
}
