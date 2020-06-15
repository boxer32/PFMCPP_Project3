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

struct Leg  FIXME this type should be 'Foot', not 'Leg'
{
    void stepForward();
    int stepSize();

};

void Leg::stepForward()
{
  // no return
}

int Leg::stepSize()
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
    Leg leftFoot; FIXME this type should be 'Foot', not 'Leg'
    Leg rightFoot;

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
    struct voltage FIXME type names always start with a capital letter
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

float Engine::regulatorFlow(float regulatorStat, Engine::voltage voltageFlow)
{
    if(regulatorStat == 10.0f)
    {
        voltageFlow.curent = 5;
        powerSwitch = true;
    }
    else
    {
        voltageFlow.curent = 0; // engine can't start
        powerSwitch = false;
    }
    return voltageFlow.resisstance;
}

int Engine::temperatureStat(int newTemperature, Engine::voltage voltageTemp)
{
    if(newTemperature > 35)
    {
        voltageTemp.resisstance = 1.2f;
    }
    else
    {
        voltageTemp.resisstance = 10.2f;
    }
    temperature = newTemperature;
    return newTemperature;
} 
bool Engine::powerSwitchStat(bool newPowerSwitchStat)
{
    if(newPowerSwitchStat == true)
    {
        transmittionLow = false; // normal transmittion mode
        generator = false;
    }
    else
    {
        transmittionLow = true; // low transmittion mode
        generator = true;
    }
    return newPowerSwitchStat;
}
//-----------EngineEnd

//-----------LocationStart
struct Location 
{
   
    int gpsLatitude,gpsLongtitude = 0;
    int barometorUnit = 0;
    float accelerometor = 0.0f; 
    float xAxis,yAxis = 0.0f; 
    char cellularLocaton = 'N';
   
    int gpsLocation(int latitude, int longtitude); 
    float accelerometerStat(float newAccelerometer); 
    int gyroscopeStat(int newGyrometer);
};
int Location::gpsLocation(int latitude, int longtitude)
{
   
    if (latitude !=0 && longtitude != 0)
    {
        return latitude + longtitude;
    }
    else
    {
        return 0; 
    }  
}
float Location::accelerometerStat(float newAccelerometer)
{
    if(cellularLocaton != 'A')
    {
        accelerometor = newAccelerometer;    
    }
    else
    {
        accelerometor = 0.0f;
    }
    return  accelerometor;
}
int Location::gyroscopeStat(int newGyrometer)
{
    if(accelerometor > 2.0f)
    {
        barometorUnit = 12;
        xAxis = accelerometor;
        yAxis = newGyrometer;
    }
    else
    {
        barometorUnit = 0;
    }
    return barometorUnit;
}
//-----------LocationEnd

//-----------OperatingSystemStart
struct OperatingSystem 
{  
    int musicPlayerSongList = 1; 
    char fileName = 'a';
    char contactList = 'b';
    bool ebookOpen = true;
    bool tetris = false;
 
    struct dataRecovery FIXME type names always start with a capital letter
    {
        int memoryCapa = 100;
        bool memoryRead = false;
        char dateStamp = 'n';
        void maxMemory(int maximumMemory = 100);
    };
    void playerSongList(int PlayerSongList,dataRecovery recovery );
    void fileNameList(char newFileName, dataRecovery recovery);
    void terisGame(bool tetrisOn,dataRecovery recovery);
};
void OperatingSystem::playerSongList(int PlayerSongList, OperatingSystem::dataRecovery recovery)
{
    if(musicPlayerSongList == 0)
    {
        recovery.memoryRead = true;
        PlayerSongList = 1; //reset list
    }
    else
    {  
        recovery.memoryRead = false;  
    }
}
void OperatingSystem::fileNameList(char newFileName, OperatingSystem::dataRecovery recovery)
{
    if(musicPlayerSongList > 1)
    {
        fileName = newFileName;
         recovery.dateStamp = 'N';
    }
    else
    {
        recovery.dateStamp = 'D';
        fileName ='a';
    }
}
void OperatingSystem::terisGame(bool tetrisOn, OperatingSystem::dataRecovery recovery)
{
    if(tetris == true)
    {
        tetrisOn = true;
        recovery.memoryCapa = 50;

    }
    else
    {
        tetrisOn = false;
        recovery.memoryCapa = 50;
    }
}
//-----------OperatingSystemEnd

//-----------HumanInterfaceStart
struct HumanInterface 
{   
    bool voiceGenderDetection = false;
    int alcoholPercentage = 0;
    int heartRate = 0;
    float alphaFrequency = 0.0f;
    char faceCamera = 'c'; //c is close camera

    int heartRateBPM(int heartBpm);
    char faceType(char readCameraData);
    char voiceType(char getType);


};
int HumanInterface::heartRateBPM(int heartBpm)
{
    if(alcoholPercentage > 40 )
    {
        return heartBpm + alcoholPercentage;  
    }
    else
    {
        return  heartRate;
    }
}
char HumanInterface::faceType(char readCameraData)
{  
    if(heartRate < 110 && voiceGenderDetection == true)
    {
        readCameraData = 'r'; // r is read
        faceCamera = 'o';// open camera by char 'o'
    }
    else 
    {
        readCameraData = 'n'; // not read
        faceCamera = 'c'; 
    }
    return faceCamera; 
}
char HumanInterface::voiceType(char getType)
{
    if(faceCamera == 'o' && alcoholPercentage < 20)
    {
        getType = 'M'; // female for example  
    }
    else
    {
        getType = 'F';
    }
    return getType;
}
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
void SensorArray::nightVision(bool nightVisionON)
{
    if(nightVisionON == true)
    {
        infaredNightDetection = true;
    }
    else
    {
        infaredNightDetection = false;
    }
}
void SensorArray::rainMode(bool rainModeOn)
{
    if(rainModeOn == true)
    {
        nearfeildDistance = 200;
    }
    else
    {
        nearfeildDistance = 100;
    }
}
bool SensorArray::nearFieldAlert(int nearField)
{
    if(nearField == nearfeildDistance)
    {
        return true; // alert on
    }
    else
    {
        return false;
    }
}
//-----------SensorArrayEnd

//-----------BatteryStart
struct Battery
{     
    int powerCapacity = 100;
    int batteryTempareture = 0;
    bool chargeMode = false;
    int chargeCircle = 0;
    int batteryLoss = 0;

    int batteryCapacity(int newPowerCapacity, int NewBatteryTempareture);
    void rechargeStat(bool rechargeOn);
    int batteryCircle(int NewBatteryCircle = 0);
};
int Battery::batteryCapacity(int newPowerCapacity, int NewBatteryTempareture)
{
    if(batteryTempareture > 80)
    {
        chargeMode = false;
        powerCapacity = 0; // dissable batterry status
    }
    else
    {
        NewBatteryTempareture = batteryTempareture;
        newPowerCapacity = powerCapacity;
    }
    return newPowerCapacity;
}
void Battery::rechargeStat(bool rechargeOn)
{
    if(rechargeOn == true && powerCapacity < 15 )
    {
        chargeMode = true;
    }
    else
    {
        chargeMode = false;
    }
}
int Battery::batteryCircle(int NewBatteryCircle)
{
    if(chargeMode == true)
    {
       NewBatteryCircle++;
    }
    return NewBatteryCircle;
}
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
int ShockAbsorber::coilTensionStat(int newCoilTension = 10)
{
    if(newCoilTension != coilTension)
    {
        coilTension = newCoilTension + shockMountPosition;
    }
    return  coilTension;
}
int ShockAbsorber::lowerControl(int newLowerControlRatio = 5) //normal ratio
{
    if(newLowerControlRatio != lowerControlRatio)
    {
        lowerControlRatio = newLowerControlRatio + shockMountPosition;
    }
    return lowerControlRatio;
}
float ShockAbsorber::gasPressure(float newGasPressure)
{
    if(offRoadMode == true)
    {
        gasValvePressure = newGasPressure;
    }
    return gasValvePressure;
}
//-----------ShockAbsorberEnd

//-----------SmartLightSwitchStart
struct SmartLightSwitch
{ 
    bool lightToggle = false;
    float dimmerValve = 0.5f;
    int emegencyLightPulse = 0;
    char lightColor = 'W'; //white
    int lightUsage = 0;

    void lightOn(bool lightSwitch);
    void dimmer(float newDimmerValve);
    int usageTime(int newLightUsage);
};
void SmartLightSwitch::lightOn(bool lightSwitch)
{
    if(lightSwitch == true)
    {
        lightToggle = lightSwitch;
    }
}
void SmartLightSwitch::dimmer(float newDimmerValve)
{
    if(emegencyLightPulse > 1)
    {
        lightColor = 'R'; //red
        dimmerValve = newDimmerValve;
    }
    else
    {
        lightColor = 'W';
        dimmerValve -= 5.0f;
    }
}
int SmartLightSwitch::usageTime(int newLightUsage = 0)
{
    if(lightToggle == true)
    {
        newLightUsage++;
    }
    return newLightUsage;
}
//-----------SmartLightSwitchEnd

//----------AntiTheftDeviceStart
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
int AntiTheftDevice::vibrationValue(int vibrationParameter = 0)
{
    if(vibration > vibrationParameter )
    {
        alarmStat = true;
        doorLockStat = true;
    }
    else
    {
        alarmStat = false;
    }
    return vibrationParameter;
}
bool AntiTheftDevice::autoDoorLock(bool doorLock)
{
    if(doorLock == false && alarmStat == false)
    {
        fingerprintSensorOn = true;    
    }
    else
    {
        fingerprintSensorOn = false;
        keypadPowerOn = false;   
    }
    return doorLock;
}
bool AntiTheftDevice::keypadReset(bool reset)
{
    if(fingerprintSensorOn == true)
    {
        keypadPowerOn = reset;
    }
    else
    {
        keypadPowerOn = false;
    }
    return keypadPowerOn;
}
//-----------AntiTheftDeviceEnd

//-----------AutonomousCarStart
 struct AutonomousCar
 {  
    Engine  EngineStat;
    Location LocationStat;
    OperatingSystem OsStat;
    HumanInterface InterfaceStat;
    SensorArray SensorStat;

    Location reportLocation(Location newLocation);  
    OperatingSystem reportOS(OperatingSystem OsData); 
    SensorArray sensor(SensorArray sensorData);
};
Location AutonomousCar::reportLocation(Location newLocation)
{
    if(newLocation.cellularLocaton != 'N')
    {
        newLocation.accelerometor = LocationStat.accelerometor;
    }
    return  newLocation;  
}
OperatingSystem AutonomousCar::reportOS(OperatingSystem OsData)
{
    if(OsData.tetris == false)
    {
        OsData.ebookOpen = OsStat.tetris;
    }
    return OsData;
}
SensorArray AutonomousCar::sensor(SensorArray sensorData)
{
    if(sensorData.fontCamera == true)
    {
        sensorData.infaredNightDetection = EngineStat.powerSwitch;
    }
    return sensorData;
}
//-----------AutonomousCarEnd


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
