#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
void rotate_once_left(int arr[], const int &SIZE)
{
    int temp = arr[0];                   // this is storing the first element, so 1
    for (int i = 0; i < (SIZE - 1); i++) //-1 so we dont go out of bounds with the +1
    {
        arr[i] = arr[i + 1]; // its pushing a index 1 ahead into the one before, so index 1 is getting index 2 pushed into it, on the next loop index 2 to index 3, creating the rotate
    }
    arr[SIZE - 1] = temp; // now we the first element, into the last.
}

void rotate_once_right(int arr[], const int &SIZE)
{
    int temp = arr[SIZE - 1]; // this is storing the last element
    for (int i = SIZE - 2; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;
}
// range sum queries without updates
int rangeSum(int arr[], int i, int j)
{
    int sum = 0;
    for (int k = i; k <= j; k++)
    {
        sum += arr[k];
    }
    return sum;
}
// euclid division algorithm to find GCD
// recursive
int GCD(int a, int b)
{
    int remainder = a % b;
    if (remainder == 0)
    {
        return b;
    }
    GCD(b, remainder);
}
int LCM()
{
}
/*Given an array of n non-negative integers. The task is to find frequency of a particular element in the arbitrary range of array[].
 The range is given as positions (not 0 based indexes) in array. There can be multiple queries of given type.*/
int findFrequency(int arr[], int const &SIZE, int left, int right, int element)
{
    // non-zero based array indexing
    left = left - 1;
    right = right - 1;
    int total = 0;
    std::vector<int> index;
    for (int i = left; i <= right; i++)
    {
        if (arr[i] == element)
        {
            total++;
            index.push_back(i + 1);
        }
    }
    std::cout << "Element: " << element << std::endl;
    std::cout << "Finds: " << total << std::endl;
    std::cout << "Index's (non-zero): ";
    for (int i = 0; i < index.size(); i++)
    {
        std::cout << index[i] << ", ";
    }
    return total;
}
int main()
{
    const int SIZE = 5;
    int iArr[SIZE] = {1, 2, 3, 4, 5};
    const int arrSIZE = 10;
    int arr[arrSIZE] = {2, 8, 6, 9, 8, 6, 8, 2, 11, 8};
    // findFrequency(arr, arrSIZE, 1, 10, 8);
    int result = GCD(15234535254, 152335345748);
    std::cout << result << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}