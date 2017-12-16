//
// Created by antonio on 17-12-16.
//
/*
 * 直接插入排序
 * j+1 与 j对比，交换，相邻交换
 * j--
 * 继续对比交换
 *
 */
#ifndef MANYSORT_INSERTSORT_H
#define MANYSORT_INSERTSORT_H


void InsertSort(DataType a[], int n){
    DataType temp ;
    int i, j ;
    for (i = 0; i < n - 1; ++i) {
        temp = a[i + 1] ;//得到即将要进来的小伙伴的下标
        j = i ;
        while (j > -1 && temp.key < a[j].key){
            a[j + 1] = a[j] ;//这个插入的过程就是：覆盖的过程。要进来的值被要后移的值覆盖
            j-- ;//放置，新加的伙伴，比原来小，需要和前一项的值做比较，或者发生覆盖
        }
        a[j + 1] = temp ;//保存的值覆盖后移元素原来的位置。其实就是一种不发生交换的换位
    }
}

//O(n*n)
#endif //MANYSORT_INSERTSORT_H
