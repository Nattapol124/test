#include<stdio.h>
#include<stdlib.h>
char name[20];
char number[5];
int main()
{
    // printf("Enter Name:");
    // gets(name); // รับchar[] 
    // fgets(name,20,stdin);//file get String // 3 parameter (name,Buffer,มาจากสตริงไหน(stdin => standard in))
    // printf("name = %s",name);
   
    fgets(number,5,stdin); // Buffer จะเก็บ input \n\0 เช่น 123 จะเก็บ 123\n\0  //stdinเป็นการรับค่าจากkeyboard
    int i = atoi(number);//แปลงinputที่เข้ามาเป็นint ถ้าแปลงเป็นfloat ใช้atof  long เป็น
    // printf("number = %s, i = %d\n",number,i);
    // char a = getchar();	//%d แสดงผลเลขฐาน10 %f floating point %o เลขฐานแปด  %xเลขฐาน16 %c character %s character string 
    // getchar();
    // char b = getchar();

    // long l= atol(number);
    // double d = atof(number); //แปลงเป็นfloatได้ ใน lib จะเป็น double //% ไม่สามารถใช้กับตัวแปรประเภท float และ double ได้
    // puts(number); // รับString อย่างเดียว ขึ้นบรรทัดด้วย
    // putchar(100);putchar('a');
    
    // ใช้datatypeอื่นเป็น boolean แทน
  //ในภาษาCไม่มีboolean 
  // int found = 0;             //false
    // float isExist = 0.0; 	//flase  
    // char isOnline ='\0';    	//flase
    // int found = 0;
    // if(0<=i && i <= 10){  // 0<i<10 //ใช้แบบนี้ไม่ได้
    //     printf("if = %d", 0<=i && i <= 10);
    // }else if (i <= 50 || !found)
    // {
    //     printf("else if");
    // }else
    // {
    //     printf("else");
    // }

    //While
    // int count = 0;
    // while (count < i)
    // {
    //     printf("%d\n",count);
    //     count++;
    //     //++count;//การทำงานเร็วกว่า count++ // ถ้าอยู่แบบนี้พอๆกัน ++count ทำก่อนcount++ // การหยุกดinfinite loop กด ctrl + c เป็นการ  interupt หยุดทุกอย่างที่processอยู่
    // }
    for (int j = 0; j < i; j++)//statement 1 รันครั้งแรกครั้งเดียว 3 // statement2 จะถูกเรียกก่อนทำลูป ถ้าจริงทำข้างใน ไม่ ไม่ทำ เสร็จแล้วจะทำ statement3 ต่อ
    {
        printf("%d\n",j);
    }
 //+, - เป็น unary operator ได้ด้วย   
  //อยากให้เลขเป็นfloatจำนวนที่ตั้งหารตัวแรกต้องใช้เป็นfloatเช่น  
 //10.0/100
//ในภาษาซีสามารถแปลงอักขระเป็นรหัส ascii ด้วยวิธีนี้
//int code;
//code = (int)'a'; // code = 97
//code = 'a'; // code = 97
//printf("%d", 'a'); // 97

//char c;
//c = (char)97; // c = 'a'
//c = 97; // c = 'a'
//printf("%c", 97); // a


    
    
}