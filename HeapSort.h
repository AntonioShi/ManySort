//
// Created by antonio on 17-12-16.
//

#ifndef MANYSORT_HEAPSORT_H
#define MANYSORT_HEAPSORT_H
/*
 * 堆排序：要求掌握，考试有要求
 * 堆：顺序存储完全二叉树
 * 分最大堆和最小堆的要求
 * 时间复杂度O（n*lbn）
 */

void CreateHeap(DataType a[], int n, int h){
    //创建堆：调整非叶子结点a[h]使它满足最大堆
    int i, j, flag ;
    DataType temp ;
    i = h ;
    j = 2 * i + 1 ;
    temp = a[i] ;
    flag = 0 ;
    //沿左右孩子中值比较大者重复向下筛选
    while (j < n && flag != 1){
        //寻找左右孩子结点中较大着，j为其下标
        if (j < n - 1 && a[j].key < a[j + 1].key)
            j++ ;

    }
}

void HeapSort() ;
#endif //MANYSORT_HEAPSORT_H
