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
    for(int i = 0; i <= n-1; i++)
    {
        int j;
        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
                break;
        }
        if(i == j)
            std::cout<<a[i]<<" ";
    }
}

//-------- main function ---------
int main(){
    int a[] = {1,1,2,3,3,3,4,5,6,5,7, 8,8};
    int size_a = sizeof(a) / sizeof(a[0]);
    Find_delete_and_print_repeat_element(a, size_a);
    return 0;
}