#include <stdio.h>
int main(void){
    // กำหนดตัวแปร Node แบบ struct
   struct Node {
       int data; // ตัวแปรเก็บข้อมูล
       struct Node* Link;   // ตัวแปรชี้ไปยัง Node ถัดไป
    };
    // ประกาศตัวแปร node1 และ node2 เป็นตัวแปรชนิด struct Node
    struct Node node1, node2;
    // กำหนดค่าให้กับ node1 และ node2
    node1.data = 10;       
    node2.data = 20;   
    node1.Link = &node2; // node1 ชี้ไปที่ node2
    node2.Link = NULL;  // node2 เป็น node สุดท้ายในลิส
    // แสดงค่าของ node1 และ node2
    printf("Node 1: data = %d\n Link = %p\n", node1.data, node1.Link);                
    printf("Node 2: data = %d\n Link = %p\n", node2.data, node2.Link);                
    return 0;
}
