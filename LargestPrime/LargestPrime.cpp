// LargestPrime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void GenerateMaxPrimes(_int64 n);
void primeFactors(_int64 n);
int main()
{
    //GenerateMaxPrimes(6666777777897);
    primeFactors(793397);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
void primeFactors(_int64 n)
{
    _int64 max = 0;
    // Print the number of 2s that divide n  
    while (n % 2 == 0)
    {
        std::cout << 2 << " ";
        n = n / 2;
        //max = 2;
    }

    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (_int64 i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n  
        while (n % i == 0)
        {
            std::cout << i << " ";
            n = n / i;
           
        }
    }

    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)
    {
        std::cout << n << " ";
       
    }

   // std::cout << max << "\n";
} 

void GenerateMaxPrimes(_int64 n)
{
    _int64 max = 1;
    //start with lowest prime number 2
    while (n % 2 == 0)
    {
        max = 2;
        n = n / 2;
    }
    //now we we are done with even numbers 

    for (_int64 i = 3; i <= sqrt(n); i = i + 2)
    {
        if (n % i == 0)
        {
            if (i > max)
            {
                max = i;
            }
            n = n / i;
        }
    }

    if (n > 2)
    {
        if (n > max)
            max = n;
    }
    std::cout << max << "\n";
}