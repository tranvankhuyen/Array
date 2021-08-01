#include <iostream>
// --- Print Array -----
void Print_Array(int a[], int n)
{
    for(int i = 0; i <= n - 1; i ++)
    {
        std::cout<<a[i]<<" ";
    }
}
// Function find and delete repeat element -----------
void Find_delete_and_print_repeat_element(int a[], int n)
{
    // Initialize Array b with counter count = 0.
    int b[100];
    int count = 0;
    for(int i = 0; i <= n - 1; i++)
    {
        int check = 0;
        for(int j = i + 1; j <= n - 1; j++)
        {
            if(a[i] == a[j])
            {
                check = 1;
                break;
            }
        }
        if(check == 0)
        {
            b[count] = a[i];
            count++;
        }
    }
    Print_Array(b, count- 1);
    std::cout<<count;
}

//-------- main function ---------
int main(){
    int a[] = {1,1,2,3,3,3,4,5,6,5,7, 8,8};
    int size_a = sizeof(a) / sizeof(a[0]);
    Find_delete_and_print_repeat_element(a, size_a);
    return 0;
}