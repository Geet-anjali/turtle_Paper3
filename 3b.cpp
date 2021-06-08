#include <bits/stdc++.h>
using namespace std;
 

int gcd(int a, int b)  // calculate greatest common fACTOR
{
    if (b == 0)
        return a;
 
    else
        return gcd(b, a % b);
}
 

void Rotate(int arr[], int d, int n)  // FUNCTION TO ROTATE AN ELEMENT
{
    /* If( d >= n)  */
    d = d % n;
    int g_c_f = gcd(d, n);
    for (int i = 0; i <g_c_f; i++) {
       
        int temp = arr[i];  // storing i th value in temp variable 
        int j = i;
 
        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;
 
            if (k == i)
                break;
 
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}
 

 

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n =6;
    int d=2;
    
    Rotate(arr, d, n);  // rotation fuction call
    
    cout<<"so the array after rotattion is";
     for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    	
 
    return 0;
}
