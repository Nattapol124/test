#include<stdio.h> // อยากรู้มีlibอะไร ใช้ ไฟล์.h
int addTen(int x)
{ // function prototype ใน() => parameterprofile ต้องกำหนด data type ของ functionไว้ด้วยนเสมอ เช่น void function (int x)
        x+=10;
        return x;
}
int addTwenty(); // ประกาศฟังชั่นต้นแบบเฉยๆ แบบนี้ เหมือนการประกาศตัวแปรไว้ก่อน //สามารถประกาศไว้ก่อนแแล้วสามารถ กำหนดฟังชั่นที่หลังได้//void จะไม่มีการreturnค่าออกมา
int x = 2000;
int main()
{
    int x = 90;
    int y = addTen(x);
    printf("addTen in main = %d\n" , y);
    printf("addTwenty in main = %d\n" , addTwenty());
}
// implement ตรงนี้
int addTwenty(){
    x += 20;
    return x;
}
// memory 
// เมื่อมีการรัน โปรแกรมจะโหลดพวกglobalมาก่อน
// int x = 2000   => 
//การจองmemoryจะจองเป็นaddressและaddressทั้งหมดจะถูกรวมเข้ากับaddressแรกของadressที่จองไว้ เช่น int จอง4 16 17 18 19 จะถูกรวมเป็น address ที่16เองแล้วทีเหลือจะหายไป
// addTen(int x) เวลาส่งค่ามา จะก็อปค่า x จากmain พอรีเทิร์น มันจะลบทุกอย่างทิ้ง 
//ถ้ามีการเปลี่ยนค่าตัวแปรglobalในlocal จะเปลี่ยนค่าตัวแปรในglobalไปด้วย ดังนั้น
//ต้องกำหนดค่าตัวแปรก่อนใช้งานเสมอไม่งั้นอาจทำให้เกิดการทำงานผิดพลาดของโปรแกรมได้
// local ดีกว่า global แต่local จะไม่มีการเก็บค่าdefaultของaddress
// recursive เป็นการเรียกฟังชั่นซ้ำแล้ว push stackเข้าไป แล้วตัวสุดท้ายจะออกมาก่อน
// 5 = 0101
// 5 >> 2 => 01
// 5 <<2 => 010100
// 5 & 1 => 0101 & 0001 // เหมือนการ modด้วย2
