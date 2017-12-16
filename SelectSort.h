//
// Created by antonio on 17-12-16.
//
/*
 * 直接选择排序
 * 找到最小的，与前面的坐标交换
 * 不停的找最小，不停的交换即可
 * 不稳定
 */
#ifndef MANYSORT_SELECTSORT_H
#define MANYSORT_SELECTSORT_H
void SelectSort(DataType a[], int n){
    //
    int small ;
    DataType temp ;
    for (int i = 0; i < n - 1; ++i) {
        small = i ;
        for (int j = i + 1; j < n; ++j) {
            if (a[j].key < a[small].key)
                small = j ;
        }
        if (small != i){//!= i
            temp = a[i] ;
            a[i] = a[small] ;
            a[small] = temp ;
        }
    }
}

#endif //MANYSORT_SELECTSORT_H
