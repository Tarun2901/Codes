#include <iostream>
using namespace std;
void sorthelp(int input[],int si,int ei)
{
    if(si>=ei)
    {
        return;
    }
    int mid=(si+ei)/2;
    sorthelp(input,si,mid);
    sorthelp(input,mid+1,ei);
    int *help= new int[ei-si+1];
    int i=si,j=mid+1,k=0;
    while(i<=mid&&j<=ei)
    {
        if(input[i]>input[j])
        { help[k]=input[j];
          j++;
          }
        else
        {
            help[k]=input[i];
            i++;
        }
        k++;
       }
    while(i<=mid)
    {
        help[k]=input[i];
        i++;
        k++;
    }
    while(j<=ei)
    {
        help[k]=input[j];
        j++;
        k++;
    }
int m=0;
    for(int i=si;i<=ei;i++)
    {
        input[i]=help[m];
        m++;
    }
    delete [] help;
    return;
}
void mergeSort(int input[], int size){
	// Write your code here
     sorthelp(input,0,size-1);
    return;
}

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
