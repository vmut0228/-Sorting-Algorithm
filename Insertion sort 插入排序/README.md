插入排序 Insertion sort

算法基本思想：

        1.数据分为两部分，一是已排序序列，二是待排序序列。
        2.开始时将数据第一个元素设为已排序序列
        3.遍历待排序序列，将扫描到的每个元素插入有序序列的适当位置
        4.如果待插入的元素与有序序列中的某个元素相等，则将待插入元素插入到相等元素的后面。

        注：
        第三步中将扫描到的每个元素插入有序序列的适当位置：
        无序序列的第一个元素与已排序序列的最后一个元素比较大小，
        如果小于则从后向前遍历已排序序列，直至找出大于等于已排序元素，插入其后。
        大于等于（位置正确），更新有序序列

代码：

    1.实现插入排序算法
    2.可选随机数组 逆序数组 大量重复值数组 基本排序数组进行测试
    3.测试数组大小不宜过大
    4.因考虑受众是新手，没有额外定义函数或类/结构体
