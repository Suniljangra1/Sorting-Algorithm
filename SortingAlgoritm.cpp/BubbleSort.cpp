// Bubble Sort Algorithm 
#include<iostream>
using namespace std;
void Bubble(int a[],int n)
{
    int i,j,temp;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]> a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    int s[]={23,4,1,22,10,5,11,19};
    Bubble(s,8);   // <- Bubble function can recive Array nane and  Array Size 
    for(int i=0; i<8; i++)
    {
        cout<<s[i]<<" ";
    }
}