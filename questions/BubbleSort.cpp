//
// Created by user3301 on 8/21/2019.
//
using namespace std;
class BubbleSort{
public:
    void bubbleSort(int *arr, int n) {


        for(int i = 0; i < n-1; ++i)
        for(int j=0; j < n - i -1; ++j) {
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }

private:
    void swap(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
};
