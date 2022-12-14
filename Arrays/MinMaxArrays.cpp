// to find min max in arrays 

#include<iostream>
using namespace std;

/*INT_MAX is a macro which represents the maximum integer value. Similarly, INT_MIN represents the 
minimum integer value.*/

int getMin(int num[], int n) {
    int mini = INT_MAX;

    for(int i = 0, i < n, i++){
        if(num[i]<min){
            min = num[i]; 
        }
    }

    // returning min value
    return mini;
}

// now for max 
int getMax(int num[], int n) {
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++) {
        if(num[i] > max) {
            max = num[i]
        }
    }

    // returning max values
    return maxi;
}

int main() {
    int size;
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++){
        cin >> num[i];

    }

    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;


    return 0;
}
