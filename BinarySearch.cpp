// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int binarySearch
(int array[], int searchedNumber, int lowerIndex, int upperIndex) {
    
    while (lowerIndex < upperIndex) {
        
        int middleIndex =  (upperIndex + lowerIndex) / 2;
        
        if (array[mid] == searchedNumber)
            return middleIndex;
            
        if (array[mid] < searchedNumber)
            lowerIndex = middleIndex ;
            
        else
           upperIndex = middleIndex;
           
    }
    
    return -1;
}

int main() {
    
    int array[] = {2, 3, 4, 10, 40};
    int searchedNumber = -11;
    
    int sizeOfArray = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, x, 0, sizeOfArray - 1);
    
    
    if (result == -1)
        cout << "Element not present in array" << endl;
    else
        cout << "Element found at index " << result << endl;
        
        
        return 0;
} 
