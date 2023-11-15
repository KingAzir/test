#include <stdio.h>
#include <math.h>

int main() {
    float distance;  // 行驶里程，单位为公里
    int waitingTime; // 等待时间，单位为分钟

    // 输入行驶里程和等待时间
    scanf("%f %d", &distance, &waitingTime);

    // 计算车费
    int totalFee = 10;  // 起步费10元
    distance -= 3; // 已经计算了3公里的起步费

    if (distance > 0) {
        if (distance <= 10) {
            totalFee += ceil(distance) * 2;  // 超出起步里程但不超过10公里，每公里2元
        } else {
            totalFee += 10 * 2 + ceil(distance - 10) * 3;  // 超过10公里以上，每公里3元
        }
    }

    // 计算等待费用
    int waitingFee = (waitingTime / 5) * 2;

    // 总费用 = 车费 + 等待费用
    totalFee += waitingFee;

    // 输出结果（四舍五入保留整数）
    printf("%d\n", (int)round(totalFee));

    return 0;
}
