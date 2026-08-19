#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;           // Let's say n = 5
    int a[n];
    
    // Input: [5, 2, 4, 1, 3]
    
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j >0 && a[j-1] > a[j]) {
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
    }
    
    // Output sorted array
    return 0;
}