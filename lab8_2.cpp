#include <iostream>

using namespace std;

int main () {

        char name[] = {"Anukul"};
        int nameLength = 6;
        cout << name;

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้
        char milk[8];
        milk[0]=name[6];
        milk[1]=name[5];
        milk[2]=name[4];
        milk[3]=name[3];
        milk[4]=name[2];
        milk[5]=name[1];
        milk[6]=name[0];
        milk[7]='\0';
        cout<<milk end;

        milk[0]=milk[0]+1;
        milk[1]=milk[1]+1;
        milk[2]=milk[2]+1;
        milk[3]=milk[3]+1;
        milk[4]=milk[4]+1;
        milk[5]=milk[5]+1;
        milk[6]=milk[6]+1;
        cout<<milk end;



        return 0;
}
