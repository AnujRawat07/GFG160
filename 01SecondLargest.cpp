class Solution{
public: 
int getSecondLargest(vector<int>&arr){
    int largest = -1, secondLargest = -1;

    // finding the second largest element
    for (int i = 0; i < n; i++) {
         if(arr[i] > largest) {
        	secondLargest = largest;
            largest = arr[i];
        }
      	else if(arr[i] < largest && arr[i] > secondLargest) {
        	secondLargest = arr[i];
        }
    }
    return secondLargest;
}
