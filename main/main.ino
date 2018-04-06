//#include <Motor.h>
#include <Thermal.h>
#include <Current.h>
#include <LiquidCrystal.h>
//#include <Proximity.h>

//Motor stir;
//Motor blend;
IRCamera amg;
Current ina(169, 0);


//Proximity prox;

// current sensor parameters
float weight; 
float current;
float currentThreshold;

const int curNumReadings = 10; //size of readings array
int readings[curNumReadings]; //readings from analog input
int curReadIndex = 0; //index of the most recent current reading 
int curTotal = 0; //running total
int curAverage = 0; //average 
int perCurExceedThreshold = 0; //%curent exceed threshold 
int currentEnd = 0; 
int override = 0; 


// IR camera parameters
float pixels[AMG88xx_PIXEL_ARRAY_SIZE];
float averageTemp;
float tempThreshold;

//proximity sensor parameters

//progress parameters
double cookProgess = 0; 

void setup() {
  amg.begin();

  //current sensor
  Serial.begin(9600);
    //for(int curThisReading=0; curThisReading < curNumReadings; curThisReading++) 
    //{
    //readings[curThisReading]=0;
    // }
}

void loop() {
  // put your main code here, to run repeatedly:

//current sensor
  //setting up updating array 
    //curTotal = curTotal - readings[curReadIndex]; //subtract the last reading
    //readings[curReadIndex] = ina.getFilteredCurrent(weight);
    // curTotal = curTotal + readings[curReadIndex]; //add the reading to total
    // curReadIndex = curReadIndex + 1; //advance to the next position in the array

  //calculate the average
    //curAverage = curTotal/curNumReadings; 

  //end signal 
    // if (curAverage > currentThreshold) {
    //  currentEnd = 1;
    // }
    // perCurExceedThreshold = curAverage/currentThreshold; 
    
    // if(perCurExceedThreshold > 1.5){
    //  overirde = 1; 
    // }
  
//IR camera 
  amg.readPixels(pixels);
  //implement a similar running average, but decide which pixels to samples 
  //end signal 
}

//Proximity sensor 
  //determine if distance reading is greater than or equal to distance threshold
  //stop system or continue running

//Progress Update 
  //cookProgress = 0.5 *(curAverage/currentThreshold + tempAverage/tempThreshold); 
  //send progress to LCD

//overal system stop 
  //if((currentEnd & tempEnd & time > minTime) or override){
  //stop signal to motor 
  //signal to piezobuzzer 
  //}