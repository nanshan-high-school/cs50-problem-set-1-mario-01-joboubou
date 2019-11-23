#include <iostream>
using namespace std;
int main() {
    int j,k,star,space;
    do {
        cout << "請問你的腰長要多少?" << "\n";
        cin >> k;
    } while (k > 8 || k <= 0);
    for (j = 0;j <= k;j++) {
        for (space = k;space > j;space--) {
            cout << " ";
        }
        for (star = 1;star <= j;++star) {
            cout << "*";
        }
    cout << "\n";
    }
}
