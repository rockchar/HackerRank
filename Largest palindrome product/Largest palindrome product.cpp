// Largest palindrome product.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void GeneratePalindromes(int n);
void Counter(int n);
using namespace std;

int main()
{
    int input = 0;
    std::cout << "Enter the number : ";
    cin >> input;
   // GeneratePalindromes(input);
    Counter(input);
}
/*
    The init step is executed first, and only once. This step allows you to declare and initialize any loop control variables. ...
    Next, the condition is evaluated. ...
    After the body of the for loop executes, the flow of control jumps back up to the increment statement. ...
    The condition is now evaluated again.

*/

void Counter(int n)
{
    int count = 0;
    int a = 10;
    for (int i = 0; i < n; i++)
    {
        std::cout << i << "\t";
        count++;
    }
    std::cout <<"\n"<<count<< "\n";
    count = 0;
    a = 10;
    for (int i = 0; i < n; ++i)
    {
        std::cout << i << "\t";
        count++;
    }
    std::cout << "\n" << count << "\n";
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
void GeneratePalindromes(int n)
{
    std::vector<int> numList;
    //parse the number to individual digits and maintain a count
    while (n != 0)
    {
        numList.push_back(n % 10);
        n = n / 10;
    }

    std::vector<int>::iterator iter;
    for (iter = numList.begin(); iter != numList.end(); ++iter)
    {
        std::cout << *iter << " ";
    }

    for (int i = 0; i < numList.size() /2 ; i++)
    {
        if (numList[i] > numList[numList.size() - i - 1])
        {
            if (numList[numList.size() - i - 1] == 0)
            {
                numList[i] = numList[i] - 1;
                numList[numList.size() - i - 1] = numList[i];
            }
        }
        else
        {
            numList[numList.size() - i - 1] = numList[i];
        }
    }
    std::cout << "\n";
    for (iter = numList.begin(); iter != numList.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
}