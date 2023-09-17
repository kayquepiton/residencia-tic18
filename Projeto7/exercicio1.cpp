#include <iostream>

using namespace std;

int main() {
    
    for(int i = 1; i <= 100; i++){    
        cout << "\n" << i;

        // Se multiplo de 3 e de 5
        if (i % 3 == 0 && i % 5 == 0){
            cout << " - FizzBuzz";
        }else if (i % 3 == 0){ // Se multiplo de 3
            cout << " - Fizz";
        }else if (i % 5 == 0){ // Se multiplo de 5
            cout << " - Buzz";
        }
    }
    
    return 0;
}
