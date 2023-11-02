#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int n,m;
    std::cin >> n >> m;
    while(m--) {
        int a,b;
        bool ck = false;
        std::cin >> a >> b;
        if(a == b) {
            std::cout << "a and b are the same node\n";
            continue;
        }
        else if(a > b) {
            ck = true;
            std::swap(a, b);
        }

        while(a < b) {
            b = (b-1)/2;
        }
        if(a == b) {
            if(ck) std::cout << "b is an ancestor of a\n";
            else std::cout << "a is an ancestor of b\n";
        }
        else std::cout << "a and b are not related\n";
    }
}
