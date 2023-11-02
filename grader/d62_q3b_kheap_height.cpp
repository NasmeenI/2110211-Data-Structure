#include <iostream>
#include <cmath>

int fLog(int a, int b) {
    return log2(a) / log2(b);
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int n,k;
    std::cin >> n >> k;
    std::cout << floor(fLog(n, k));
}