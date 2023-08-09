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
    int Num1,Num2,Num3 ;
    printf( "Input[1] : ") ;
    scanf( "%d",&Num1) ;
    printf( "Input[2] : " ) ;
    scanf( "%d",&Num2) ;
    printf( "Input[3] : " ) ;
    scanf( "%d",&Num3) ;
	if( Num1 < Num2 < Num3 ) {
		printf( "%d %d %d ",Num1,Num2,Num3) ;
		}else if( Num1 < Num3 < Num2 ) {
		printf( "%d %d %d ",Num1,Num3,Num2) ;
		}else if( Num2 < Num1 < Num3 ) {
		printf( "%d %d %d ",Num2,Num1,Num3) ;
		}else if( Num2 < Num3 < Num1 ) {
		printf( "%d %d %d ",Num2,Num3,Num1) ;
		}else if( Num3 < Num2 < Num1 ) {
		printf( "%d %d %d ",Num3,Num2,Num1) ;
		}else if( Num3 < Num1 < Num2 ) {
		printf( "%d %d %d ",Num3,Num1,Num2) ;
	}//end if
		else {printf( "please enter number only." ) ;
		}
    return 0 ;
}