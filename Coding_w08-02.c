#include <stdio.h>

int main() {
    int start, stop;
    printf("start number:");   // รับค่าจากผู้ใช้ ผ่านคีบอร์ด
    scanf("%d" , &start);      // เก็บค่าที่รับมาไว้ในตัวแปร start
    printf("stop number:");     // รับค่าจากผู้ใช้ ผ่านคีบอร์ด
    scanf("%d" , &stop);       // เก็บค่าที่รับมาไว้ในตัวแปร stop
    printf("start number is %d and stop number is %d\n" , start, stop);   
    printf("-------------\n");

    printf("sequence from start to stop: ");
    for(; start <= stop; start++) {
            printf("%d " , start);  // แสดงผลลัพธ์ 

    } 
    printf("\n thank you \n");

    return 0;
}
// บรรทัดที่ 5-10 รับค่าจากผู้ใช้ผ่านคีบอร์ด และเก็บไว้ในตัวแปร start กับ stop
// บรรทัดที่ 11  กำหนดค่าเริ่มต้นเป็น start, เงื่อนไข start ต้องไม่เกิน stop, เพิ่มค่า start ทีละ 1