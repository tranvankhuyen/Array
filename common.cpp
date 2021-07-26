#include <iostream>
#include <limits>
#include <time.h>

void Print(int a[], int n)
{
    for(int i = 0; i <= n - 1; i++)
    {
        std::cout<<a[i]<<" ";
    }
}
int main()
{
    clock_t start, end;
    start = clock();
    int common[20];
    int a[] = {1,2,3,54,4,5,6};
    int size_a = sizeof(a) / sizeof(a[0]);   
    int b[] = {4,5,6,7,54,8,9,10};
    int size_b = sizeof(b) / sizeof(b[0]);
    int count1 = 0;

    // Find common elements of Array a and Array b. Save in common Array.
    for (int i = 0; i <= size_a - 1; i++)
    {
        for(int j = 0; j <= size_b - 1; j++)
        {
            if(a[i] == b[j])
            {
                common[count1] = a[i];
                count1++;
                break;
            }
        }
    }
    int common1[20];
    int c[] = {1,4,7,23,54};    
    int size_c = sizeof(c) / sizeof(c[0]);
    int count2 = 0;

    // Find common element of common Array and c Array. Save in common1 Array.
    for(int i = 0; i <= count1 - 1; i++)
    {
        for(int j = 0; j <= size_c; j++)
        {
            if(common[i] == c[j])
            {
                common1[count2] = common[i];
                count2++;
                break;
            }
        }
    }
    Print(common1, count2);
    end = clock();
    std::cout<<std::endl<<(end-start) / CLOCKS_PER_SEC;
    return 0;
}