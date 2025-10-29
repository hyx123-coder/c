#include <stdio.h>

int main() {
    int sex;
    float weight;
    int cubage;

    printf("请输入性别(1=男性,0=女性)和体重(公斤)，用逗号分隔：");
    scanf("%d,%f", &sex, &weight);

    if (sex == 1) {
        cubage = (weight > 120) ? 200 : 180;
    } else {
        cubage = (weight > 100) ? 150 : 120;
    }

    printf("输血量为：%d毫升\n", cubage);
    return 0;
}