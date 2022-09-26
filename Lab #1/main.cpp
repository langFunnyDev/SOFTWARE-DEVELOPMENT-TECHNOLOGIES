#include <iostream>
#include <vector>

void SieveOfEratosthenes(std::vector <bool> &v, int &n){
    for(int i = 2; i < n; ++i){
        v[i] = true;
    }
    for(int i = 2; (i * i) <= n; ++i){
        if(v[i]){
            for(int j = (i * i); j <= n; j += i){
                v[j] = false;
            }
        }
    }
}

void PrintToConsole(std::vector <bool> &v, int &start_number, int &end_number){
    for(int i = start_number; i <= end_number; ++i){
        if(v[i]) std::cout << i << " ";
    }
}

int main() {
    int start_number, end_number;

    std::cin >> start_number;
    std::cin >> end_number;

    std::vector <bool> prime_numbers (end_number + 1);

    SieveOfEratosthenes(prime_numbers, end_number);

    PrintToConsole(prime_numbers, start_number, end_number);

    return 0;
}
