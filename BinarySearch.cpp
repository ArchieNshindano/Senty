// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

//CHANGES MADE = NAMING, SPACING , YOUR CODE WAS STUCK IN A LOOP IF I SEARCH FOR A NEGATIVE NUMBER ,

int binarySearch
(int array[], int searchedNumber, int lowerIndex, int upperIndex) {
    
    while (lowerIndex < upperIndex) { // changed <= to <
        
        int middleIndex =  (upperIndex + lowerIndex) / 2; //  low + (high-low)/2  is irrelevant and overcomplicating everything
        
        if (array[mid] == searchedNumber)
            return middleIndex;

        // Adding or subtracting one is irrelevant 
        if (array[mid] < searchedNumber)
            lowerIndex = middleIndex ;
            
        else
           upperIndex = middleIndex;
           
    }
    
    return -1;
}

int main() {

    // space your code , your code was ugly 
    
    int array[] = {2, 3, 4, 10, 40};
    int searchedNumber = -11;


    // use proper naming for others to understand
    
    int sizeOfArray = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, searchedNumber, 0, sizeOfArray - 1);
    
    
    if (result == -1)
        cout << "Element not present in array" << endl;
    else
        cout << "Element found at index " << result << endl;
        
        
        return 0;
} 
