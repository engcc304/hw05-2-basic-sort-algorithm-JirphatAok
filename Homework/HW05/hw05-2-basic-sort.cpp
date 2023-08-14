/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include <stdio.h>

int main() {
    int Num1, Num2, Num3, positionmax, positionmid, positionmin ;
    printf("Input[1] : ");
    scanf("%d", &Num1);
    printf("Input[2] : ");
    scanf("%d", &Num2);
    printf("Input[3] : ");
    scanf("%d", &Num3);

    if (Num1 > Num2 && Num1 > Num3) {
        positionmax = Num1 ;
        if ( Num2 > Num3) {
            positionmid = Num2 ;
            positionmin = Num3 ;
        }//endif
        else {
            positionmid = Num3 ;
            positionmin = Num2 ;
        }//endelse
    }
    else if ( Num2 > Num1 && Num2 > Num3 ){
        positionmax = Num2 ;
         if ( Num1 > Num3) {
            positionmid = Num1 ;
            positionmin = Num3 ;
        }//endif
        else {
            positionmid = Num3 ;
            positionmin = Num1 ;
        }//endelse
    }
    else {
        positionmax = Num3 ;
        if ( Num1 > Num2 ) {
            positionmid = Num1 ;
            positionmin = Num2 ;
        }//end if
        else {
            positionmid = Num2 ;
            positionmin = Num1 ;
        }//end else
    }
    
    printf("%d %d %d\n", positionmax, positionmid, positionmin);
    return 0 ;
}