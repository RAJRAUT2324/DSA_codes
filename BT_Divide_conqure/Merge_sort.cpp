#include<iostream>
#include<algorithm>
using namespace std;
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    
    // Create temp arrays
    int L[n1], R[n2];
    
    // Copy data to temp arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    
    // Merge the temp arrays back into arr[l..r]
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    
    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k++] = L[i++];
    }
    
    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k++] = R[j++];
    }
}
// finding mid and the forget to it sorts but just add the reccurtion method
void mergeSort(int arr[], int l, int r) {
    if (l >= r) {
        return; // returns recursively
    }
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m); //half left for reccurtion
    mergeSort(arr, m + 1, r);//half right reccurtion
    merge(arr, l, m, r);//merge two array
}

int main()
{
    int arr[]={7,2,9,2,6,1};
    int s=0;
    int e=5;
    mergeSort(arr, s, e);
    cout<<"The sorted array :"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}