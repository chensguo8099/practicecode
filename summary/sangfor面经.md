### 一面
1. 说下C语言中有哪些内存分配函数（malloc/brk/sbrk/ptmalloc..
2. 说下如何解决或有效避免内存泄漏（我说的是初始化指针时置NULL，释放指针所指对象时将指针至NULL这类的安全操作，然后说C++通过智能指针去有效避免内存泄漏
3. 说下指针有什么作用（乱扯，还说了跟引用的区别
4. 如何在C++中写C？（extern关键字
5. 如何在C中写C++？（这个我真得醉了，我没写过，然后跟他说C++中能够写C，具有C的特性，并且多出来一些C++特有的特性，但是C中写C++..就从这个但是开始，他把我打断了，跟我说C中能否写C++和重载有什么关系？我一脸蒙蔽说没关系没关系..
6. 你说一下数据结构的链表、栈、树吧（跟他把数据结构说了下，链表的话拓展到了内存分配的空闲链表法，然后栈的话还跟他说了加减乘除运算这样的应用场景，然后就是树，跟他说了二叉搜索、AVL还有epoll用到的红黑树，不过没有细说红黑树，细说的话我直接GG，然后AVL树查找的时间复杂度这个没说出来
7. 问我哈希查找的时间复杂度（我说O(logN)
8. 如果有一个存放100万个url的表，如何快速找到对应的url（一开始我说的是哈希结构，因为查找效率较高，但是缺点是空间太大，这点面试官也跟我指出来了，好在我之前了解过hhh，然后我就说用布隆过滤器，可能会有误判，但是空间占用小

### 二面
1. 告诉A、B两个集合，这两个集合是IP段，如A集合`1.1.1.3~1.1.1.5`，B集合是`1.1.1.5~1.1.1.7`，然后问合并为C集合是`1.1.1.3~1.1.1.7`，用什么样的数据结构解决这种问题？（实际上IP也是由一组数组成的，我说的是就比如按照数组角标代表这个区间，给区间内的数组元素值置1，然后打印有1存在的区间的首尾，既就是合并后的C集合。如果A、B集合合并后不是一个集合，则两个子集合的并集就是这个C集合。
2. 聊项目（吹就VANS了，为我并发量，服务器那边的，没测..问我有没有看过rapidjson，没有...问我看过哪些源码没...没有...问我项目难点，跟他说陈硕muduo日志系统的双buffer，要吐槽的是这个面试官真的在我讲逻辑进行先后推理的时候，往往当我讲出前因还没来得及讲出我的解决方法的时候他就会打断我，而且往往他问我的问题就是我接下来准备给他说的答案，然后我再讲出我的解决方法，我真得觉得难道不能听我说完吗？体验一般吧
3. 问我文件大小如何操作（stat/st_size
4. 问我看过哪些书（这里也是，在我还没说完的情况下直接打断我，问我打开多个文件fd的时候出现上限怎么办，我说的是通过ulimit -a查看fdsize，通过sysctl修改内核参数，然后他问我如何使用系统API实现修改，答不出来..