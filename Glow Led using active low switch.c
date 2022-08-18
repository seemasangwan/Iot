#include<mega8.h>
void main(){
    PORTC=0B00000000;
    DDRC=0B00001000; 
    
    PORTD=0B00000001;
    DDRD=0B00000000;    
    
    while(1){
        if(PIND.0==0){
            PORTC.3=1;
        } else {
            PORTC.3=0;
        }
    }
}
