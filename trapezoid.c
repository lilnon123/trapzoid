#include <stdio.h> //เรียกใช้ library พื้นฐาน
int main() //ไวยากรณ์
{
    double base1, base2, height, area; //สร้างตัวแปร base1 base2 height area
    printf("กรุณาป้อนฐานด้านบน : "); //แสดงผล กรุณาป้อนฐานด้านบน :
    scanf("%lf",&base1); //รับค่า base1 
    printf("กรุณาป้อนฐานด้านล่าง : "); //แสดงผล กรุณาป้อนฐานด้านล่าง :
    scanf("%lf",&base2); //รับค่า base2 
    printf("กรุณาป้อนความสูง : "); //กรุณาป้อนความสูง :
    scanf("%lf",&height); //รับค่า height 
    area = 0.5 * (base1+base2) * height;
    //กำหนดให้ตัวแปร area โดยจะใช้สูตร 0.5คูณ แล้วเอาค่าที่ผู้ใช้เก็บไว้ใน base1 มาบวกกับ base2 แล้วคูณด้วย ตัวแปร height 
    printf("พื้นที่สี่เหลี่ยมคางหมู = %.2f\n", area); //แสดงผล พื้นที่สี่เหลี่ยมคางหมู = ค่าที่อยู่ในตัวแปร area โดยให้แสดงเป็นเลขทศนิยม2ตำแหน่ง
}