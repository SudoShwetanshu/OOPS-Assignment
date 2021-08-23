#include<iostream>

int main()
{
    
    int arr[100],size,i;

    /
    printf("Enter array size\n");
    cin >> size;

    
    cout << "Enter array elements\n";
    for(i = 0; i < size; i++)
          cin >> arr[i];

    
    printf("Elements are\n");
    for(i = 0; i < size; i++)
          if (arr[i] > 0) {
		cout << arr[i];
	  }
    return 0;
}