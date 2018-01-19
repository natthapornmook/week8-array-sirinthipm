#include <iostream>

using namespace std;

int main () {

        char name[] = {"Anukul"};
        int nameLength = 6;
        cout << name;

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้
        char mook[8];
        mook[0]=name[6];
        mook[1]=name[5];
        mook[2]=name[4];
        mook[3]=name[3];
        mook[4]=name[2];
        mook[5]=name[1];
        mook[6]=name[0];
        mook[7]='\0';
        cout<<mook end;

        mook[0]=mook[0]+1;
        mook[1]=mook[1]+1;
        mook[2]=mook[2]+1;
        mook[3]=mook[3]+1;
        mook[4]=mook[4]+1;
        mook[5]=mook[5]+1;
        mook[6]=mook[6]+1;
        cout<<mook end;



        return 0;
}
