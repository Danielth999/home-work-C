#include <stdio.h>

int main() {
    int score = 0, answer;

    printf("Present Tenses Quiz\n");
    printf("เลือกคำตอบที่ถูกต้องที่สุดเพียง 1 ข้อ\n\n");

    // ข้อ 1
    printf("1. How often does Peter go to the swimming pool? – He _____ to the swimming pool every day. He likes swimming.\n");
    printf("1) goes\n2) is going\n3) has gone\n4) has been going\n");
    printf("คำตอบของคุณ: ");
    scanf("%d", &answer);
    if(answer == 1) score++;
    printf("เฉลย: goes\n\n");

    // ข้อ 2
    printf("2. When is the best time to call you? – I usually _____ till nine in the evening. Call me around ten, if you can.\n");
    printf("1) work\n2) am working\n3) have worked\n4) have been working\n");
    printf("คำตอบของคุณ: ");
    scanf("%d", &answer);
    if(answer == 1) score++;
    printf("เฉลย: work\n\n");

    // ข้อ 3
    printf("3. Let's ask Anna to make apple pie for dessert. She _____ great apple pies.\n");
    printf("1) makes\n2) is making\n3) has made\n4) has been making\n");
    printf("คำตอบของคุณ: ");
    scanf("%d", &answer);
    if(answer == 1) score++;
    printf("เฉลย: makes\n\n");

    // ข้อ 4
    printf("4. Please be quiet. My children _____ now.\n");
    printf("1) sleeping\n2) are sleeping\n3) have slept\n4) have been sleeping\n");
    printf("คำตอบของคุณ: ");
    scanf("%d", &answer);
    if(answer == 2) score++;
    printf("เฉลย: are sleeping\n\n");

    // ข้อ 5
    printf("5. The sun _____ in the east.\n");
    printf("1) rises\n2) is rising\n3) has risen\n4) has been rising\n");
    printf("คำตอบของคุณ: ");
    scanf("%d", &answer);
    if(answer == 1) score++;
    printf("เฉลย: rises\n\n");

    printf("คุณได้คะแนน %d จาก 5 คะแนนจากทั้งหมด5ข้อ\n", score);

    return 0;
}
