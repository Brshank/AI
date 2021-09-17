void mergeSort(float a[], int first, int last) {
     //Function performs a mergeSort on an array for indices first to last
     int mid;
     //if more than 1 element in subarray
     if(first < last){
              mid =(first + last) / 2;
              //mergeSort left half of subarray
              mergeSort(a, first, mid);
              //mergeSort right half of subarray
              mergeSort(a, mid+1, last);
              //merge the 2 subarrays
              merge(a, first, mid, last);
              }
}



void merge(float a[], int first, int mid, int last){
     //Function to merge sorted subarrays a[first -> mid] and 
     //a[(mid+1)-> last] into a sorted subarray a[first->last]

     int ndx1; 
     int ndx2;
     int last1;
     int last2;
     int i;
     ndx1 = first;
     last1 = mid;
     ndx2 = mid + 1;
     last2 = last;
     i = 0;

     //Allocate temporary array with same size as a[first, last]
     float temp[SIZE];

     while((ndx1 <= last1) && (ndx2 <= last2)){
                 if(a[ndx1] < a[ndx2]) {
                            temp[i] = a[ndx1];
                            ndx1 = ndx1 + 1;
                            i++;
                            }
                 else{
                      temp[i] = a[ndx2];
                      ndx2 = ndx2 + 1;
                      i++;
                      }
     }

     while(ndx1 <= last1){
                temp[i] = a[ndx1];
                ndx1 = ndx1 + 1;
                i++;
                }

     while(ndx2 <= last2){
                temp[i] = a[ndx2];
                ndx2 = ndx2+1;
                i++;
                }

     int j;           
     i = 0;
    for(j = first; j <= last; ++j) {
        a[j] = temp[i++];
        }

}         