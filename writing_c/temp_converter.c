#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin; // ประกาศตัวแปรสำหรับเก็บค่าอุณหภูมิ

    printf("กรุณาใส่อุณหภูมิ (องศาเซลเซียส): "); // ขอให้ผู้ใช้ป้อนค่าเซลเซียส
    scanf("%f", &celsius); // รับค่าเซลเซียสจากผู้ใช้

    fahrenheit = (celsius * 9 / 5) + 32; // แปลงเป็นฟาเรนไฮต์
    kelvin = celsius + 273.15; // แปลงเป็นเคลวิน

    printf("อุณหภูมิ %.2f องศาเซลเซียส = %.2f องศาฟาเรนไฮต์\n", celsius, fahrenheit); // แสดงผลฟาเรนไฮต์
    printf("อุณหภูมิ %.2f องศาเซลเซียส = %.2f องศาเคลวิน\n", celsius, kelvin); // แสดงผลเคลวิน

    return 0; // จบการทำงานของโปรแกรม
}