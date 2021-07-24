#include <iostream>
#include<time.h>


// main function
int main(){
    int a[5] = {1,2,3,4,5};
    int b[5] = {5,3,1};
    int n(5);
    clock_t start, end;
    start = clock();
    for(int i = 0; i <= n - 1; i++)
    {
        int t = 0;
        for(int j = 0; j <=n; j++)
        {
            if (a[i] == b[j])
            {
                t = 1;
            }
        }
        if(t == 0)
        {
            std::cout<<a[i]<<" ";
        }

    }
    end = clock();
    double time_use;
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    std::cout<<"\n"<<time_use;
    return 0;
}