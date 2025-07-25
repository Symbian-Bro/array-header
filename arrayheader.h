#ifndef ARRAYHEADER_H
#define ARRAYHEADER_H
#include <iostream>
#include <algorithm>

inline void selection_sort(int size, int* ar) {
    for (int i = 0; i < size - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < size; ++j) {
            if (ar[j] < ar[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            std::swap(ar[i], ar[min_idx]);
        }
    }
}


inline int linear_search(int size,int* ar,int element){
    bool flag = false;
    int i;
    for(i=0;i<size;i++){
        if(ar[i]==element){
            flag = true;
            break;
        }
    }
    if(flag){
        return i;
    }
    else{
        return -1;
    }
}

inline int binary_search(int size,int* ar,int element){
 int middle,low,high,i;
 low=0,high=(size-1);
 bool flag=false;
 while(low<=high){
  middle = (low+high)/2;
  if(ar[middle]==element){
   flag=true;
   break;
  }
  if(ar[middle]<element){
   low=middle+1;
  } 
  else if(ar[middle]>element){
   high=middle-1;
  }
 }
 if(flag){
  return middle;
 }
 else{
  return -1;
 }
}

inline int selection(int size,int* ar,int element,int choice){
    if(choice==1){
        return linear_search(size,ar,element);
    }
    else if(choice==2){
        selection_sort(size,ar);
        return binary_search(size,ar,element);
    }
    else{
        return -2;
    }
}
#endif
