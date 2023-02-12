#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }cout<<endl;
}

//With Swap Function
void swap_alternate(int arr[], int size)
{
    for(int i = 0; i < size; i += 2)
    {
        if(i+1 < size)
        {
            swap(arr[i], arr[i+1]);
        }
    }
}

//Without Swap Function
// void swap_alternate(int arr[], int size)
// {
  
//     for(int i = 0; i < size; i += 2)
//     {
//         if(i+1 < size)
//         {
//             int temp = arr[i+1];
//             arr[i+1] = arr[i];
//             arr[i] = temp;
//         }
//     }
// }

int main()
{
    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = {11, 33, 9, 76, 43};

    swap_alternate(odd, 5);
    printArray(odd, 5);

    return 0;
}