
#include<iostream>
using namespace std;
#include<unordered_map>
	int highestFrequency(int *a, int n){	 
		
	/* Don't write main().
     	* the input array is already passed as function argument.
     	* Taking input and printing output is handled automatically.
     	*/
     	unordered_map<int,int> c;
        for(int i=0;i<n;i++)
        {   int key=a[i];
            if(c.count(key)==0)
            {
                c[key]=1;
            }
         else
         {
             c[key]++;
         }  
        }
     	
        int max=c[a[0]];
        int ans=a[0];
        int j=1;
        while(j<n)
        {
            if(c[a[j]]>max)
            {
                max=c[a[j]];
                ans=a[j];
            }
            j++;
        }
        return ans;
     	

    }

int main()
{
    int n;
    int input[100000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>input[i];
    }
    int maxKey= highestFrequency(input, n);
    cout<<maxKey;
    return 0;
}

