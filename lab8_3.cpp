#include <iostream>
using namespace std;

int main () {
        // สร้างตัวแปร array ชื่อ calendar เพื่อสร้างที่เก็บปฏิทิน
        // calendar[5][7]

        int calendar[6][7]={{0,0,0,0,0,1,2,},{3,4,5,6,7,8,9},{10,11,12,13,14,15,16},{17,18,19,20,21,22,23},{24,25,26,27,28,29,30},{31,0,0,0,0,0}};
        }



        // เขียนโปรแกรมแสดงปฏิทินเดือน ธันวาคม /2560
        // วันที่ไม่ใช่วันของเดือน ธันวาคมให้แสดงด้วย x



        // เขียนโปรแกรมเพื่อรับวันจากผู้ใช้ แล้วแสดงเฉพาะวันที่นั้น
        // 0 = อาทิตย์, 1 = จันทร์ ... 7 = เสาร์


        // เขียนโปรแกรมเพื่อรับสัปดาห์ของเดือนจากผู้ใช้ เขียนโปรแกรมเพื่อคัด เฉพาะวันของสัปดาห์
        // 1 หมายถึง สัปดาห์ที่ 1 ของเดือนธันวาคม 2560 จะได้เลข {1, 2}

        inti,j;
        for(i=0;i<6;i++){
        for(j=0;j<7;j++){
            cout<< calendar
            [i][j]<<"";
        }
        cout<<endl;
        }

        return 0;
}
