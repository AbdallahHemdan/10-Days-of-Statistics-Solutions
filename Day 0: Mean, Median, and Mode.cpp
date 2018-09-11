#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
#include <assert.h>
#include <vector>
#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>
#include <numeric>
#include<array>
#include<tuple>
#include <utility>
#include <functional>
#include <locale>
#define     all(v)            v.begin(),v.end()
#define     mp                     make_pair
#define     pb                     push_back
typedef   long long int               ll ;

using namespace std;
int mostFrequent(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);
 
    // find the max frequency using linear traversal
    int max_count = 1, res = arr[0], curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }
 
    // If last element is most frequent
    if (curr_count > max_count)
    {
        max_count = curr_count;
        res = arr[n - 1];
    }
 
    return res;
}
 
int main() {
   int n ; 
    cin >> n ; 
    int arr[n] ; 
    float sum = 0 ; 
    for(int i=0 ;i<n ;i++)
    {
        cin >> arr[i] ; 
        sum+= arr[i] ; 
    }
    cout << fixed << setprecision(1) << sum/n  << endl ; 
    sort(arr,arr+n) ; 
    if (n%2==0)
        cout << fixed << setprecision(1) << (arr[n/2-1]+arr[n/2])/2.0 <<endl ; 
     else
         cout << fixed << setprecision(1) << arr[n/2] <<endl ;
     cout << mostFrequent(arr,n) <<endl ;    
}
