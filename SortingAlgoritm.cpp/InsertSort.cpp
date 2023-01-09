// Insertion Sort Algorithm
#include<iostream>
using namespace std;
void insertion(int a[], int n)
{
    for(int i=1; i<n; i++)
    {
        int pivot = a[i];
        int j = i-1;
        while(a[j]>pivot && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = pivot;
    }
}
int main()
{
    int s[]={23,4,1,22,10,5,11,19};
    insertion(s,8);   // <- Merge function can recive Array nane and  Array Size 
    for(int i=0; i<8; i++)
    {
        cout<<s[i]<<" ";
    }
}