# 分治法
## 2-1(众数问题)
###### 问题描述：给定含有n个元素的多重集合S，每个元素在S中出现的次数称为该元素的重数。多重集S中重数最大的元素称为重数。
###### 例如，S = {1, 2, 2, 2, 3, 5}。多重集S的众数是2，其重数为3。


## 2-2(半数集问题)
###### 问题描述：给定一个自然数n，由于n开始可以依次产生半数集set(n)中的数如下：
###### 1）n属于set(n)；
###### 2）在n的左边加上一个自然数，但该自然数不能超过最近添加的数的一半。
###### 3）按此规则进行处理，直到不能再添加自然数为止。
###### 例如，set(6) = {6, 16, 26, 126, 36, 136}。半数集set(6)中有6个元素。


## 2-3(有重复元素的排列问题)
###### 问题描述：设R={r1, r2, ..., rn}是要进行排列的n个元素，r1, r2, ..., rn可能相同。试设计一个算法，列出R的所有不同排列。
###### 参考资料：www.cnblogs.com/dztgc/archive/2014/04/20/3033059.html

## bubblesort.c（冒泡排序）

## mergesort.c（归并排序）

## randQsort.c（随机化快速排序）：
###### 随机找一个中间值（我们这里找的中间值并不一定是n/2，而是随机的一个数），使得在随机的中间值左侧的数都小于中间值，右侧的数都大于随机的中间值，然后左右分别递归下去直到lo >= hi跳出递归。

## RndSelection.c（线性事件选择问题：随机化第k元素选择算法）：
###### 给定线性序列集中的n个元素和一个整数k，k在1和n之间，要求找出这n个元素中的第k小的元素（给定线性集是无序的）。线性事件选择随机划分法可以模仿随机化快排，基本思想是对输入数组进行递归划分，与快速排序不同的是它只对划分出的子数组之一进行递归处理。

## factorial.c
###### n阶乘计算

## full_permutation.c
###### 多个字符的全排列,比如说a,b,c三个字母全排列有：abc,acb,bac,bca,cab,cba。

## hannoi.c（汉诺塔问题）
###### 汉诺塔问题

## integer_divide.c（整数分解问题）
###### 整数分解问题

## chessboard.cpp（棋盘问题）
###### 在2^n * 2^n个方格组成的棋盘中若恰有一个方格与其他方格不同，则称该方格为一特殊方格，且该棋盘为一特殊棋盘（脏位）。用递归分治的策略可以设计棋盘覆盖问题。

## round-robin_schedule.cpp（循环赛日程安排）
###### 循环赛日程安排表
