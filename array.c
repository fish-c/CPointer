#include <stdio.h>

int main() {
    int arr[4];

    // 创建一个指针，指向数组第一个元素
    int *arrP = &arr[0];

    // 不断使指针+1，那么这个指针就会指向下一个元素
    for (int i = 0; i < 4; ++i) {
        *arrP = i * 2;
        arrP++;
    }

    for (int j = 0; j < 4; ++j) {
        printf("arr[%d]: %d\n", j, arr[j]);
    }

    return 0;
}
//arr[0]: 0
//arr[1]: 2
//arr[2]: 4
//arr[3]: 6