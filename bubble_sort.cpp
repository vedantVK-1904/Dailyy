// If you need dynamic resizing, use std::vector.
// If you want fixed size with more safety than raw arrays, use std::array.
// If you're constrained to raw arrays, use pointers but be cautious
//  of memory management.

// Time O(n 2)(worst / avg),𝑂(𝑛^2)(best)

//Space O(1)

#include <iostream>
#include <array>

std::array<int, 10> bubble_sort(std::array<int, 10> Arr)
{

    for (int i = 0; i < Arr.size(); i++)
    {
        for (int j = i + 1; j < Arr.size() - i - 1; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                std::swap(Arr[j], Arr[j + 1]);
            }
        }
    }

    return Arr;
}

int main()
{

    std::array<int, 10> arr = {19, 20, 13, 14, 5, 85, 1, 31, 40, 3};
    std::array<int, 10> result = bubble_sort(arr);
    return 0;
}
