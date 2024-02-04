#include<iostream>
using namespace std;

int main()
{
    int m=5,n=6;
    int a1[m]={1,8,5,15,12},a2[n]={4,5,7,8,9,10};
    int i=0,j=0,k=0;
    int temp[11];
    while(i<m && j<n){
        if(a1[i]<=a2[j]){
            temp[k]=a1[i];
            k++;
            i++;
        }
        else if(a1[i]>a2[j]){
            temp[k]=a2[j];
            k++;
            j++;
        }
    }
    while (i<m)
    {
        temp[k]=a1[i];
        k++;i++;
    }
    while (j<n)
    {
        temp[k]=a2[j];
        k++;j++;
    }
    for (auto i : temp)
        cout<<i<<" ";
    
    
    return 0;
}