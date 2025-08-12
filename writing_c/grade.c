#include <stdio.h>

int main() {
    int score1, score2, total; // ประกาศตัวแปรสำหรับคะแนนสอบและคะแนนรวม

    // รับคะแนนครั้งที่ 1
    do {
        printf("กรุณาใส่คะแนนครั้งที่ 1 (ไม่เกิน 50): ");
        scanf("%d", &score1);
    } while (score1 < 0 || score1 > 50);

    // รับคะแนนครั้งที่ 2
    do {
        printf("กรุณาใส่คะแนนครั้งที่ 2 (ไม่เกิน 50): ");
        scanf("%d", &score2);
    } while (score2 < 0 || score2 > 50);

    total = score1 + score2; // คำนวณคะแนนรวม

    printf("คะแนนรวม: %d\n", total);
    printf("เกรดที่ได้: ");

    // ตรวจสอบและแสดงผลเกรด
    if (total >= 80) {
        printf("A\n");
    } else if (total >= 75) {
        printf("B+\n");
    } else if (total >= 70) {
        printf("B\n");
    } else if (total >= 65) {
        printf("C+\n");
    } else if (total >= 60) {
        printf("C\n");
    } else if (total >= 55) {
        printf("D+\n");
    } else if (total >= 50) {
        printf("D\n");
    } else {
        printf("F\n");
    }

    return 0;
}