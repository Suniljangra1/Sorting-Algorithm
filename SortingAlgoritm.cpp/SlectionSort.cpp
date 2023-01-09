// Slection Sort Algorithm    = find the smallest value first then compare next value 
#include<iostream>
using namespace std;
void Slection(int a[],int n)
{
    int min,temp;
    for(int i=0; i<n-1; i++)
    {
        min = i;
        for(int j= i+1; j<n; j++)
        {
            if(a[min]>a[j])
            {
                min = j;
            }
        }
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
    }
}
int main()
{
    int s[]={23,4,1,22,10,5,11,19};
    Slection(s,8);   // <- Slection function can recive Array nane and  Array Size 
    for(int i=0; i<8; i++)
    {
        cout<<s[i]<<" ";
    }
}
