#include<stdio.h>
int main(){
    //pointer เป็นตัวแปรที่เก็บค่าaddress
    int x = 100;
    // int เก็บค่า pointer เก็บ address
    int q = 0144; // ประกาศเลขฐานอื่น ฐาน8 %o
	
    int w = 0x64; // ฐาน 16 %x
    // printf("x = %d\n",x);
    // printf("reference of x = %lu\n", &x); // address = reference 
    // printf("reference of x = %p\n", &x);  // %p ได้เลขฐาน 16 00 0x บอกว่าตัวต่อมาคือเลขฐาน 16//%p เป็นการแสดงค่าaddressที่pointerชี้ไป

    //int number[] = {1, 2, 3, 4, 5, 6};
    // int number[100];
    // int number[100]= {1, 2, 3, 4, 5, 6}; // ถึงประกาศไว้ 6 ก็เข้าถึง index ที่ 1000ได้ และ เปลี่ยนค่าได้ด้วย//ถ้ากำหนดค่าไม่เท่ากับจำนวนarrayที่ประกาศไปค่าที่เหลือจะกลายเป็นค่าที่หลงเหลิออยู่ในaddressนั้น
    //number[100000] = 200; เป็นการเกำหนดค่าในarray
    // printf("index 1 = %d\n", number[100000] );	
    // printf("reference of &number[1] = %p\n", &number[1000]); 
    // printf("reference of &number[0] = %p\n", &number[0]);
    // printf("reference of number = %p\n", number+1); // ชื่อตัวแปรarrayเก็บaddress ของindex ที่่0 
   	 //ถ้าnumberเป็นpointer ถ้า +1 เป็นการบวก address ไปทีละ+4เนื่องจากint ต้องใช้memoryขนาด4bit ก่อนที่จะชี้ไปที่indexต่อไป
    //number = &number[0] ==> number +1 คิอ &number[1]

    // int number[] = {1, 2, 3, 4, 5, 6};
    // int *ptr = &x; //เป็นการreturnค่าของaddressนั้น จะเก็บค่าaddressของx
    // int *arrPtr; //ประกาศpointerต้อง*เสมอ
    // arrPtr = number; // ใส่addressให้มัน ครั้งที่ 2 ต้องไม่มีดอกจัน ==> arrPtr ชี้ address ของ number
    // arrPtr += 3; // จะชี้ไปที่ indexที่3ของarray
    // *arrPtr += 3; // *pointer ค่าในaddressนั้นจะถูกบวกค่า + 3 แล้วกจะassightค่ากลับเข้าไปในarrayตำแหน่งที่pointerที่ชี้ไป
    // printf("arrPtr = %p, *arrPtr = %d \n",arrPtr,*arrPtr);

    // int number[] = {1, 2, 3, 4, 5, 6};  //int มีการจองaddressทีละ4 และaddressจะถูกยุบรวมเป็นaddressของarray
    // for(int *ptr = number ; ptr <= &number[5]; ptr++){
    //     printf("[%p] = %d\n", ptr , *ptr); 

    // }
    // int *ptr2 = number; //pointerชี้ไปที่arrayลำดับแรก
    // for(int i = 0; i < 6; i++){
    //     printf("[%p] = %d\n",ptr2 + i,*(ptr2 + i));
    // }
    // char input[100]; 
    // int count = 0;
    // char c;
    // while ( (c = getchar()) != '\n')
    // {
    //     input[count] = c;
    //     ++count;
    // }
    // input[count] = '\0';
    // //char *ptr = input;
    // for(char *ptr = input; *ptr != '\0';ptr++){
    //     printf("%c\n" , *ptr);
    // }
    char s[100];
    int i;
    char c; 
    scanf("%d=%c=%s" , &i,&c,s); //&returnค่าของaddressที่จะเก็บถ้าเป็นตัวเลขต้องใช้&ในการรับinput ตัวเลข เสมอ
    printf("%d--%c--%s" , i,c,s); 

}