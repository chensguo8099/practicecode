/*************************************************************************
 先把N个自然数按次序排列起来。1不是质数也不是合数，要划去。第二个数2是质数
 保留下来，而把2后面所有能被2整除的数都划去。2后面第一个没划去的数是3，把3
 留下，再把3后面所有能被3整除的数都划去。3后面第一个没划去的数是5，把5留下，
 再把5后面所有能被5整除的数都划去。这样一直下去，就会把不超过N的全部合数都
 筛选掉，留下的就是不超过N的全部质数。
 ************************************************************************/

#include<iostream>
using namespace std;

