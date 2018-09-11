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

int getMedian(vector<int> a, int start, int end) {
    int median = 0;
    int size = end - start + 1;
    if (size % 2 == 0) {
        median = (a[start + size / 2 - 1] + a[start + size / 2]) / 2;
    }
    else {
        median = a[start + (size - 1) / 2];
    }
    return median;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int freq[n] ; 
    for (int i = 0; i < n; i++)
          cin >> freq[i] ; 
    vector<int> res ;
    for (int i = 0; i < n; i++)
          for(int j=0 ; j<freq[i] ;j++)
               res.pb(a[i]) ; 
    sort(res.begin(), res.end());
    int size = res.size() ; 
      double Q1, Q2, Q3;
    Q1 = getMedian(res, 0, size / 2 - 1);
    Q2 = getMedian(res, 0, size - 1);
    if (n % 2 == 0) {
        Q3 = getMedian(res, size / 2, size - 1);
    } else {
        Q3 = getMedian(res, size / 2 + 1, size - 1);
    } 
    cout << fixed << setprecision(1) << Q3-Q1 << endl;
}
