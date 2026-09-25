//factorial of n
/*#include <bits/stdc++.h>
using namespace std;
int f(int i, int factorial) {
    if (i<1) return factorial;
    return f(i-1,factorial*i);
}
int main() {
    int n;
    cin >> n;
    cout << f(n,1);
    return 0;
}
*/
//code B
//functional way
#include <bits/stdc++.h>
using namespace std;
int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}
int main() {
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
