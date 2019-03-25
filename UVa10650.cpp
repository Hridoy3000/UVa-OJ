//Md Najmul Huda Hridoy

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <bitset>
#include <utility>
#include <set>
#include <math.h>
#define pi acos(-1.0)
#define N 1 << 15
using namespace std;
 
bool mark [N];
vector <int> primeList;
 
void sieve ()
{
    memset (mark, true, sizeof(mark));
 
    mark [0] = mark [1] = false;
 
    for(int i=2;i*i<N;i++){
    	if(mark[i]){
    		for(int j=i*i;j<N;j+=i){
    			mark[j]=false;
			}
		}
	}
 
    primeList.clear ();
    primeList.push_back (2);
 
    for ( int i = 3; i < N; i += 2 ) {
        if ( mark [i] )
            primeList.push_back (i);
    }
 
    
}
 
void print (int here, int there)
{
    printf ("%d", primeList [here]);
 
    for ( int i = here + 1; i <= there; i++ )
        printf (" %d", primeList [i]);
    printf ("\n");
}
 
int main ()
{
    sieve ();
 
    int x, y;
 
    while ( scanf ("%d %d", &x, &y) ) {
        if ( x == 0 && y == 0 ) break;
 
        if ( x > y )
            swap (x, y);
 
        size_t i = 0;
 
        while ( primeList [i] < x )
            i++;
 
        while ( primeList [i + 2] <= y ) {
            if ( primeList [i + 2] - primeList [i + 1] == primeList [i + 1] - primeList [i] ) {
                int startIndex = i;
                int endIndex = i + 2;
                int diff = primeList [i + 1] - primeList [i];
                while ( i + 3 < primeList.size () && primeList [i + 3] - primeList [i + 2] == diff ) {
                    endIndex++;
                    i++;
                }
 
                if ( primeList [endIndex] <= y ) {
                    if ( startIndex == 0 || primeList [startIndex] - primeList [startIndex - 1] != diff)
                        print (startIndex, endIndex);
                }
                else break;
            }
            i++;
        }
    }
 
    return 0;
}
