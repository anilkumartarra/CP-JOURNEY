Just like a phoenix rises from the ashes, a phoenix word is built out of destruction of many words.

You are given a list of N words. From each word you can keep any one letter and discard the remaining letters. Then you can use the N chosen letters by concatenating them in any order to build a new string. Find the lexicographically smallest string that you can obtain.


INPUT

First line contains N, the number of words. (1 ≤ N ≤ 103)
Next N lines each contain a word made of small english alphabets only.
Sum of lengths of all words ≤ 103


OUTPUT

Output should contain one word : the lexicographically smallest word possible to build as given above.

Sample Input 0

3
cross
stop
arm
Sample Output 0

aco
Explanation 0

take a from arm, c from cross and o from stop.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(char*)a-*(char*)b;
}
int main() 
{
    int n;
    scanf("%d",&n);
    char s[n][1000],res[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i]);
        char min=122;
        for(int j=0;s[i][j];j++)
        {
            if(s[i][j]<min)
            {
                min=s[i][j];
            }
            res[i]=min;
        }
    }
    res[n]="\0";
    qsort(res,n,sizeof(char),cmp);
    printf("%s",res);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
