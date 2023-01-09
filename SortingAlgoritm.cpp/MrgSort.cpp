// A sorting Algorithm  MARGE SORT 
#include<iostream>
using namespace std;
void Merge(int a[],int StartPointLeft, int leftPartEnd, int StartPointRight, int End)
{
    int temp[50], i = StartPointLeft, j = StartPointRight , k = 0;
    while(i<= leftPartEnd && j <= End)
    {
        if(a[i]<a[j])
        {
            temp[k++] = a[i++];
            // i++,k++;
        }
        else
        {
            temp[k++] = a[j++];
            // j++,k++;
        }
    }
        while(i<=leftPartEnd)
        {
            temp[k++] = a[i++];
            // i++,k++;
        }
        while(j<=End)
        {
            temp[k++] = a[j++];
            // j++,k++;
        }
        int b;
        for(k=0, b=StartPointLeft ; b<=End; b++,k++)
        {
            a[b] = temp[k];
        }
}
void Merg_Sort(int a[], int i, int j)
{
    int mid = (i + j) / 2;
    if(i<j)
    {
        Merg_Sort(a, i, mid);    // <- Left part of the Array 
        Merg_Sort(a, mid+1, j);  // <- Right part of the Array
        Merge(a, i, mid, mid+1, j);

    }
}
int main()
{
    int s[]={23,4,1,22,10,5,11,19};
    Merg_Sort(s,0,7);
    for(int i=0; i<8;i++)
    {
        cout<<s[i]<<" ";
    }
    
}
