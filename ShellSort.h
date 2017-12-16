//
// Created by antonio on 17-12-16.
//
/*
 * 希尔排序：缩小增量排序 O(N*(lbN)2),不稳定
 * 是直接插入排序的一个变形
 */
#ifndef MANYSORT_SHELLSORT_H
#define MANYSORT_SHELLSORT_H
void ShellSort(DataType a[], int n, int d[], int numOfD){
    //d[]是希尔增量序列，一般选择素数，效率可能会高些
    int j, span ;
    DataType temp ;
    for (int m = 0; m < numOfD; ++m) {
        //numOfD序列元素个数
        span = d[m] ;
        for (int k = 0; k < span; ++k) {
            //组内是直接排序，每次不是增加+，而是增加span，区间长度

            for (int i = k; i < n - span; i += span) {//这个循环如果把span 换成 1， 则变成了直接插入排序
                temp = a[i + span] ;
                j = i ;
                while (j > -1 && temp.key <= a[j].key){
                    a[j + span] = a[j] ;
                    j = j - span ;
                }
                a[j + span] = temp ;
            }
        }
    }
}
#endif //MANYSORT_SHELLSORT_H
