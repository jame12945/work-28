#include<iostream>
using namespace std;
int* mypointer1;
int* mypointer2;

void segregateEvenOdd(int nums[], int n)
{
    int ctr = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == 0)
            ctr++;
    }

    for (int i = 0; i < ctr; i++)
        nums[i] = 0;

    for (int i = ctr; i < n; i++)
        nums[i] = 1;
}

int main()
{
    int a,b,row;
    cout << "Please enter two integers value that  must be 1,0 only: ";
    scanf_s("%d", &a);//1
    scanf_s("%d", &b);//0
    mypointer1 = &a;
    mypointer2 = &b;
    int nums[] = { *mypointer1, *mypointer1, *mypointer2, *mypointer2, *mypointer1, *mypointer2, *mypointer1, *mypointer2, *mypointer2,*mypointer1 };//10 
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    segregateEvenOdd(nums, n);

    printf("\nArray after divided: ");
    for (int i = 0; i < n; i++) 
        cout << nums[i] << " ";

   
    return 0;
}