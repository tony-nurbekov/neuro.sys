#include <iostream>
#include <vector>
using namespace std;

const int A_SIZE = 5;

int main()
{
    int A[A_SIZE] = {0, 1, 2, 3, 4};

    for (int i = 0; i < A_SIZE; i++) {
        A[i] = i*10;
    }
    //A[-1] = 0;  // DANGEROUS! ����� �� ������� �������!

    vector<int> B(10);
    for (int i = 0; i < B.size(); i++) {
        B[i] = i;
    }

    for (int i = 0; i < B.size(); i++) {
        cout << B[i] << '\t';
    }
    cout << '\n';

    cout << "Once again B:\t";
    for (int x: B){  // ������ �� "for x in A:" � ������.
        cout << x << '\t';
    }
    cout << '\n';


    return 0;
}

