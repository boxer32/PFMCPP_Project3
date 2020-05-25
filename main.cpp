 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   - you should be left with only your UDTs.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */

struct leg 
{
    void stepForward();
    int stepSize();

};

void leg::stepForward()
{
  // no return
}

int leg::stepSize()
{

    return 2;
}

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;
    leg leftFoot;
    leg rightFoot;

    void run(int howFast, bool startWithLeftFoot);
};

void Person::run(int howFast, bool startWithLeftFoot)
{
    if (howFast >= 1)
    {
        if (startWithLeftFoot == true)
        {
            leftFoot.stepForward();
            rightFoot.stepForward();
        }
         else
        {
            rightFoot.stepForward();
            leftFoot.stepForward();
        }
        distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();

    }
    else
    {
     //noting or "return char please insert howFast?"

    }
}
 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */

//-----------EngineStart
struct Engine 
{
  
    float regulator =        0.0f;
   
    bool generator =         true;
    int temperature =        0;
    bool transmittionLow =   true;
    bool powerSwitch =       false;
    struct voltage 
    {
       int curent = 12;
       float resisstance = 0.1f;
       void maxCurent(int maximumCurent = 100);

     
    };

  
    float regulatorFlow(float regulatorStat,voltage voltageFlow ); 
    int temperatureStat(int newTemperature, voltage voltageTemp); 
    bool powerSwitchStat(bool newPowerSwitchStat);

    
    voltage averageVoltage;
};


//-----------EngineEnd


//-----------LocationStart
struct Location 
{
   
    int gpsLatitude,gpsLongtitude = 000000000;
    int barometorUnit = 0;
    float accelerometor = 0.0f; 
    float xAxis,yAxis = 0.0f; 
    char cellularLocaton = 'N';
   
    int gpsLocation(int latitude, int longtitude); 
    float accelerometerStat(int newAccelerometer); 
    float gyroscopeStat(int newGyrometer);
};
//-----------LocationEnd

//-----------OperatingSystemStart
struct OperatingSystem 
{
    
    int musicPlayerSongList = 1; 
    char fileName = 'a';
    char contactList = 'b';
    bool ebookOpen = true;
    bool tetris = false;
 
    struct dataRecovery
    {
        int memoryCapa = 100;
        bool memoryRead = false;
        char dateStamp = 'n';
        void maxMemory(int maximumMemory = 100);
    };



    void playerSongList(int musicPlayerSongList,dataRecovery recovery );
    void fileNameList(char newFileName, dataRecovery recovery);
    void terisGame(bool tetrisOn,dataRecovery recovery);
};
//-----------OperatingSystemEnd

//-----------HumanInterfaceStart
struct HumanInterface 
{
    
    bool voiceGenderDetection = true;
    int alcoholPercentage = 0;
    int heartRate = 0;
    float alphaFreqquemcy = 0.0f;
    char faceCamera = 'a';

    int heartRateBPM(int heartBpm);
    char faceType(char readCameraData);
    char voiceType(char getType);


};
//-----------HumanInterfaceEnd

//-----------SensorArrayStrat
struct SensorArray
{

    bool infaredNightDetection = true;
    int nearfeildDistance = 100;
    bool rainDetection = false;
    bool backCamera = true;
    bool fontCamera = true;
    
    void nightVision(bool nightVisionON);
    void rainMode(bool rainModeOn);
    bool nearFieldAlert(int nearField);
};
//-----------SensorArrayEnd

//-----------BatteryStart
struct Battery
{   
    
    int powerCapacity = 100;
    int batteryTempareture = 100;
    bool chargeMode = true;
    int chargeCircle = 0;
    int batteryLoss = 0;

   int batteryCapacity(int newPowerCapacity, int NewBatteryTempareture);
   void rechargeStat(bool rechargeOn);
   int batteryCircle(int NewBatteryCircle);
};
//-----------BatteryEnd

//-----------ShockAbsorberStart
struct ShockAbsorber
{
    
    bool offRoadMode = false;
    int coilTension = 15; 
    int lowerControlRatio = 5;
    float gasValvePressure = 0.0f;
    int shockMountPosition = 5; 

    int coilTensionStat(int newCoilTension);
    int lowerControl(int  newLowerControlRatio);
    float gasPressure(float newGasPressure);

};
//-----------ShockAbsorberEnd

//-----------SmartLightSwitch
struct SmartLightSwitch
{
    
    bool lightToggle = false;
    float dimmerValve = 0.5f;
    int emegencyLightPulse = 0;
    char lightColor = 'R';
    int lightUsage = 0;

    void lightOn(bool lightSwitch);
    void dimmer(float newDimmerValve);
    int usageTime(int newLightUsage);
};

struct AntiTheftDevice
{
    
    bool alarmStat = false;
    int vibration = 0;
    bool doorLockStat = true;
    bool keypadPowerOn = false;
    bool fingerprintSensorOn = false;

    int vibrationValue(int vibrationParameter);
    bool autoDoorLock (bool doorLock); 
    bool keypadReset(bool reset);
};

 struct AutonomousCar
 {
    
    Engine  EngineStat;
    Location LocationStat;
    OperatingSystem OsStat;
    HumanInterface InterfaceStat;
    SensorArray SensorStat ;

    Location reportLocation(Location newLocation);  
    OperatingSystem roportOS(OperatingSystem OsData); 
    SensorArray sensor(SensorArray sensorData);

};

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
