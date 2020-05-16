#include<iostream>
using namespace std;
int partition(int a[],int si,int ei)
{
int countsmaller=0;
int pivotelement=a[si];
for(int i=si+1;i<=ei;i++)
{
    if(a[si]>=a[i])
    {
countsmaller++;
    }
}
   int pindex= si+countsmaller;
    a[si]=a[pindex];
    a[pindex]=pivotelement;
int i=si,j=ei;
    while(i<pindex&&j>pindex)
    {
if(a[i]<=pivotelement)
{
i++;
}
    else if(a[j]>pivotelement)
    {
     j--;
    }
    else
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    }
return pindex;
}
void quick(int a[],int si,int ei)
{
    if(si>=ei)
    {
        return;
    }
    int pos=partition(a,si,ei);
    quick(a,si,pos-1);
    quick(a,pos+1,ei);
    return;
}
void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
quick(input,0,size-1);
    return;
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}
