#define b1 RB0_bit
#define b2 RB1_bit
#define b3 RB2_bit
#define b4 RB3_bit
#define b5 RB4_bit
#define b6 RB5_bit

int a,b;

void main() {


      CMCON = 7;
      TRISA = 0b00000000;
      PORTA = 0b00000000;



      TRISB = 0x5;
      PORTB = 0b00000000;



while (1)
{
      if(b1 == 1)
      {
           a = 1;
      }
      else if (b2 == 1)
      {
           a = 2;
      }

      else if (b3 == 1)
      {
           a = 3;
      }

      if(b4 == 1)
      {
            b = 1;
      }
      else if (b5 == 1)
      {
           b = 2;
      }
      else if (b6 == 1)
      {
            b = 3;
      }


      if ((a == 1) && (b == 1))
      {
       RA1_bit = 1;
       delay_ms(1000);
       a = 0;
       b = 0;
      }

     else if((a == 1) && (b == 2))
     {
      RA2_bit = 1;
      delay_ms(2000);
      a = 0;
      b = 0;
     }

     else if (( a == 1) && (b == 3))
     {
      a = 0;                            //
      b = 0;
      RA0_bit = 1;
      delay_ms(2000);                   //1 - pedra 2-papel 3- tesoura


     }

     else if (( a == 2) && (b == 1))
     {
      RA0_bit = 1;
      delay_ms(2000);
      a = 0;
      b = 0;
     }
     else if (( a == 2) && (b ==2))
     {
      RA1_bit = 1;
      delay_ms(2000);
      a = 0;
      b = 0;
     }

     else if (( a == 2) && (b ==3))
     {
      RA2_bit = 1;
      delay_ms(2000);
      a = 0;
      b = 0;
     }

     else if (( a == 3) && (b ==1))
     {
      RA2_bit = 1;
      delay_ms(2000);
      a = 0;
      b = 0;
     }

     else if (( a == 3) && (b ==2))
     {
      RA0_bit = 1;
      delay_ms(2000);
      a = 0;
      b = 0;
     }

     else if (( a == 3) && (b ==3))
     {
      RA1_bit = 1;
      delay_ms(2000);
      a = 0;
      b = 0;
     }

     else
     {
      RA0_bit = 0;
      RA1_bit = 0;
      RA2_bit = 0;
     }
 }
}