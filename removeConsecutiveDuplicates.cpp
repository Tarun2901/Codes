#include <iostream>
using namespace std;
void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
int s=0;
    while(input[s]!='\0')
    {
        s++;
    }
if(s<1)
{
    return;
}
removeConsecutiveDuplicates(input+1);
if(input[0]!=input[1])
{
    return;
}
else
{   
    s=0;
    while(input[s]!='\0')
    {
        s++;
    }
    for(int i=1;i<s;i++)
    {
input[i-1]=input[i];
    }
s--;
    input[s]='\0';
}
    return;
}

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
