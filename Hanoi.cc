#include <iostream>
using namespace std;

void hanoi(int n, char src, char mid, char dst){
    if (n == 1) {
        cout << "Convert " << n << " from " 
            << src <<" to " << dst << endl;
    } else {
        hanoi(n-1, src, dst, mid);
        cout << "Convert " << n << " from " 
            << src << " to " << dst << endl;
        hanoi(n-1, mid, dst, src);
    }
}

int main(){
   int n = 0;
   cin>>n;
   hanoi(n, 'A', 'B', 'C'); 
}
