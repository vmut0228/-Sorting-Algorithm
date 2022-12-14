#include<iostream>
// 随机函数有关
#include <cstdlib>
#include <ctime> 

//测试算法运行时间
#include <windows.h>
#include <time.h>
#include<winbase.h>
using namespace std;
int main() {

	int arr[100000] = {};				//数组大小
	int arrLength = sizeof(arr) / 4;//获取数组arr的长度
	//cout << arrLength << endl;

	
	int z;
	cout << "选择测试模式：" << endl << "随机数组输入1" << endl << "逆序数组输入2" << endl << "大量重复值数组输入3" << endl << "基本已排序数组输入4" << endl;

	cin >> z;//选择测试模式

	//初始化数组
	for (int y = 0; y < arrLength; y++) {

		if (z == 1) {		//产生随机数组测试
			//srand(time(0));//来设置rand()产生随机数时的随机数种子
			arr[y] = rand();

		}
		else if (z == 2) {	//产生逆序数组测试
			static int l = 1000;
			l--;
			arr[y] = l;
		}
		else if (z == 3) {//大量重复数值数组测试
			arr[y] = rand() % (4 - 1 + 1) + 1;//rand()%(high-low+1)+low 产生1-4的重复数字
		}
		else if (z == 4) {//基本已排序数组测试
			static int l = 42;
			arr[y] = l;
			l++;           //产生完全排序数组
			if (y % 10 == 0) {//产生少数没排序的数组元素
				arr[y] = rand();
			}
		}
		//cout << arr[y] << " ";//输出产生数组

	}
	
	long t1 = GetTickCount64();//程序段开始前取得系统运行时间(ms) 

	//插入排序
	int i, j, temp;
	//int arr[5] = { 4,6,3,2,4 };
	for (i = 1; i < arrLength;i++ ) {
								//i是未排序元素的第一个下标
		int temp = arr[i];		//未排序元素的第一个值
		int j = i - 1;			//已排序元素的最后一个索引

		while(j>=0&&temp<arr[j]){
			//已排序元素的最后一个下标大于等于0 && 未排序元素的第一个值小于已排序元素的最后一个值
			arr[j + 1] = arr[j];
			j--;
	}
		arr[j + 1] = temp;

}

	
	long t2 = GetTickCount64();

	//输出最后排序后的数组
	/*
	for (int x = 0; x < arrLength; x++) {
		cout << arr[x] << endl;
	}*/
	

	 cout << "插入排序运行时间" << (t2 - t1)/1000 << "s" << endl;
	 cout << "插入排序运行时间" << (t2 - t1) << "ms" << endl;
}