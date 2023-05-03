#include <iostream>
int main(){
    for (int i = 1; i<=100; ++i) {
        if (i % 3 == 0 && i & 5 == 0) {
            std::cout << "FizzBuzz" << std::endl;
                    }
                else if (i % 3 == 0) {
                    std::cout << "Fizz" << std::endl;
                }
                else if (i % 5 == 0) {
                    std::cout << "Buzz" << std::endl;
    }
    else{
        std::cout << i << std::endl;
    }
}
return 0;
}



# Номер - 2.




#include <iostream>
using namespace std;

int main() {
int a[] = {1, 4, 6};
int b[] = {11, 33, 22};
int n = sizeof(a) / sizeof(a[0]);
bool swapped;
do {
swapped = false;
for (int i = 0; i < n - 1; i++) {
if (b[i] > b[i+1]) {
swap(b[i], b[i+1]);
swap(a[i], a[i+1]);
swapped = true;
}
}
} while (swapped);
for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
}
return 0;
}
