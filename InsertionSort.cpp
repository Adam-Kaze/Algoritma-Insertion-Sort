#include <iostream>
#define n 9

using namespace std;

int main() {
    int A[n] = {23, 17, 14, 6, 13, 10, 1, 5, 7};

    cout << "\n |=====> Sebelum Dilakukan Pengurutan <=====|\n ";
    for (int i = 0; i <= n - 1; i++) {
        cout << "   " << A[i];
	  } cout << endl;

    for (int k = 0; k < n; k++) {
        int i = k;
        int x = A[i];
        while (i >= 0 && A[i - 1] > x) {
            A[i] = A[i - 1];
            i--;
        }
        A[i] = x;
    } cout << "\n\n  *Sedang proses pengurutan\n\n";

    cout << "\n |=====> Sesudah Dilakukan Pengurutan <=====|\n ";
    for (int i = 0; i <= n - 1; i++) {
        cout << "   " << A[i];
	  } cout << endl << endl;

    return 0;
}