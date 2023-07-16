#include <chrono>
#include <iostream>
 
using namespace std;

long fibonacci(unsigned n)
{
    if (n < 2)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
 
int main()
{
       //for 
    const auto start = std::chrono::steady_clock::now();
    const auto fb = fibonacci(42);
    const auto end = std::chrono::steady_clock::now();
    const chrono::duration<double> elapsed_seconds = end - start;
 
    cout << "f(42) = " << fb << '\n' << "elapsed time: ";
    cout << "time " << elapsed_seconds.count()<<endl;
  
}
