// Even Fibonacci numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
void FibEvenSum(long long n);
int main() {
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++) {
        long n;
        cin >> n;
        FibEvenSum(n);
    }
    return 0;
}

void FibEvenSum(long long n)
{
    long long num = 1;
    long long prevNum = 0;
    long long sum = 0;
    while (true)
    {
        long long temp = num;
        num = num + prevNum;
        if (num > n)
            break;
        //cout << num <<" ";
        if ((num % 2) == 0)
            sum += num;
        prevNum = temp;
    }
    cout<<sum<<"\n";
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
