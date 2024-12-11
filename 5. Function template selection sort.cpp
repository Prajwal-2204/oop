#include <iostream>
using namespace std;

#define Size 10
int n;

template <class T>
void selection(T A[Size]) {
    int i, j, Min;
    T temp;

    for (i = 0; i <= n - 2; i++) {
        Min = i;
        for (j = i + 1; j <= n - 1; j++) {
            if (A[j] < A[Min])
                Min = j;
        }
        temp = A[i];
        A[i] = A[Min];
        A[Min] = temp;
    }

    cout << "\nThe sorted list is:\n";
    for (i = 0; i < n; i++)
        cout << "\t" << A[i];
    cout << endl;
}

int main() {
    int i, A[Size];
    float B[Size];

    cout << "\n\t\tSelection Sort\n";

    // Integer elements
    cout << "\nHandling Integer elements";
    cout << "\nHow many elements are there? ";
    cin >> n;
    if (n > Size) {
        cout << "Error: Number of elements exceeds the maximum size (" << Size << ").";
        return 1;
    }

    cout << "\nEnter the integer elements:\n";
    for (i = 0; i < n; i++)
        cin >> A[i];
    selection(A);

    // Float elements
    cout << "\nHandling Float elements";
    cout << "\nHow many elements are there? ";
    cin >> n;
    if (n > Size) {
        cout << "Error: Number of elements exceeds the maximum size (" << Size << ").";
        return 1;
    }

    cout << "\nEnter the float elements:\n";
    for (i = 0; i < n; i++)
        cin >> B[i];
    selection(B);

    return 0;
}

