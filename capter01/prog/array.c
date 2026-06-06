#include <stdio.h>
int main(void){
    // กำหนดตัวแปร array ชื่อ a ที่มีขนาด 10
    int a[10];
    // กำหนดค่าให้กับสมาชิกของ array a ด้วย loop for 
    for(int i=0; i<10; i++){    
        a[i] = i;
    }
    // แสดงค่าของสมาชิกของ array a ด้วย loop for 
    for(int i=0; i<10; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
