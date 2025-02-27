#include <stdio.h>
void bubble_sort(int arr[], int n);
void print_arr(int arr[], int n);
int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Enter number to store in the arr :");
        scanf("%d", &arr[i]);
    }
    print_arr(arr, 6);
    bubble_sort(arr, 6);
    printf("\n");
    print_arr(arr, 6);

    return 0;
}
void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
// sort in ascending order
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}