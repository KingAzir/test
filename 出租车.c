#include <stdio.h>
#include <math.h>

int main() {
    float distance;  // ��ʻ��̣���λΪ����
    int waitingTime; // �ȴ�ʱ�䣬��λΪ����

    // ������ʻ��̺͵ȴ�ʱ��
    scanf("%f %d", &distance, &waitingTime);

    // ���㳵��
    int totalFee = 10;  // �𲽷�10Ԫ
    distance -= 3; // �Ѿ�������3������𲽷�

    if (distance > 0) {
        if (distance <= 10) {
            totalFee += ceil(distance) * 2;  // ��������̵�������10���ÿ����2Ԫ
        } else {
            totalFee += 10 * 2 + ceil(distance - 10) * 3;  // ����10�������ϣ�ÿ����3Ԫ
        }
    }

    // ����ȴ�����
    int waitingFee = (waitingTime / 5) * 2;

    // �ܷ��� = ���� + �ȴ�����
    totalFee += waitingFee;

    // ���������������뱣��������
    printf("%d\n", (int)round(totalFee));

    return 0;
}
