//Author: Laura Galindez Olascoaga, Katia Herrera
//This program acquires data from encoders and publishes their info 
//Subscribes to: none
//Publishes: /encoders [std_msgs/ColorRGBA]

#include <ros.h>
#include <std_msgs/ColorRGBA.h>

//falta dato de direccion
//para ello generar un mensaje que contenga dos parametros
// es mas conveniente usar un solo publisher (que contenga los 4 datos)

//Set up the ros node and publisher
std_msgs::ColorRGBA encoder_msg;
ros::Publisher pub_encoder("encoder", &encoder_msg);
ros::NodeHandle nh;


#define c_LeftEncoderPinA 0   //pin 2 -> interrupt 0
#define c_LeftEncoderPinB 10
#define c_RightEncoderPinA 1  //pin 3 -> interrupt 1
#define c_RightEncoderPinB 12

volatile bool _LeftEncoderBSet;
volatile int _LeftEncoderTicks = 0;
volatile bool _RightEncoderBSet;
volatile int _RightEncoderTicks = 0;
//volatile bool direction ;






void setup()
{
 // Serial.begin(9600);  
  // Quadrature encoders
  // Left encoder
 // pinMode(c_LeftEncoderPinA, INPUT);      // sets pin A as input
  pinMode(c_LeftEncoderPinB, INPUT);      // sets pin B left encoder as input
  pinMode(c_RightEncoderPinB, INPUT);      // sets pin B right encoder as input
  attachInterrupt(c_LeftEncoderPinA, HandleLeftMotorInterrupt1, RISING);
  attachInterrupt(c_RightEncoderPinA, HandleRightMotorInterrupt2, RISING);


   nh.initNode();
   
   nh.advertise(pub_encoder);
}


void loop()
{

     

//if (Serial.available() > 0)
    //{
       encoder_msg.r=_RightEncoderTicks;
       encoder_msg.g=_LeftEncoderTicks;
       pub_encoder.publish(&encoder_msg);
       _LeftEncoderTicks=0 ;
       _RightEncoderTicks=0 ;
       nh.spinOnce();
       delay (100) ;
    //}



 }






// Interrupt service routines for the left motor's quadrature encoder
void HandleLeftMotorInterrupt1()
{
  // Test transition; since the interrupt will only fire on 'rising' we don't need to read pin A
  _LeftEncoderBSet = digitalRead(c_LeftEncoderPinB);   // read the input pin

  // and adjust counter + if A leads B
  if (_LeftEncoderBSet==0)
    _LeftEncoderTicks += 1;
  else
    _LeftEncoderTicks -=1;
  
}








// Interrupt service routines for the right motor's quadrature encoder
void HandleRightMotorInterrupt2()
{
  // Test transition; since the interrupt will only fire on 'rising' we don't need to read pin A
  _RightEncoderBSet = digitalRead(c_RightEncoderPinB);   // read the input pin

  // and adjust counter + if A leads B
  if (_RightEncoderBSet==0)
    _RightEncoderTicks += 1;
  else
    _RightEncoderTicks -=1;
  
}
