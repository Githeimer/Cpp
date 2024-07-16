#include <iostream>

int main()
{
    int i;
    std::cout << "Enter 10 numbers" << std::endl;
    int arr[10];
    int temp;

    for (i = 0; i < 10; i++)
    {
        std::cout << "Enter " << (i + 1) << ":";
        std::cin >> arr[i];
    }

    int j;

    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10 - i - 1; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    std::cout << "The Greatest Number is: " << arr[0];
}