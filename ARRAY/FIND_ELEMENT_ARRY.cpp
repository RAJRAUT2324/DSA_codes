#include <iostream>
using namespace std;
int main()
{
    cout << endl;
    int arr[3][2]; //to fond targeted value from the 2-d array
    int target=3;
    for (int row = 0; row < 3; row++) // row
    {
        for (int col = 0; col < 2; col++) // colum
        {
            cout << "Enter elements of array :";
            cin >> arr[row][col];
        }
    }
    for (int row = 0; row < 3; row++) // row
    {   
        for (int col = 0; col < 2; col++) // colum
        {
            if(target== arr[row][col])
            {
              cout<<"row = "<<row<<" "<<"col ="<<col;
              
            }
           
            cout<<arr[row][col];
         
        }
    
        cout << endl;
    }
    return 0;
}