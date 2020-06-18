 /*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.




//-----------EngineStart
struct Engine 
{
    float regulator =        0.0f;
    bool generator =         true;
    int temperature =        0;
    bool transmittionLow =   true;
    bool powerSwitch =       false;
    struct Voltage //fixed
    {
       int curent = 12;
       float resisstance = 0.1f;
       void maxCurent(int maximumCurent = 100);
    };
    float regulatorFlow(float regulatorStat,Voltage voltageFlow ); 
    int temperatureStat(int newTemperature, Voltage voltageTemp); 
    bool powerSwitchStat(bool newPowerSwitchStat);
    Voltage averageVoltage;
};

float Engine::regulatorFlow(float regulatorStat, Engine::Voltage voltageFlow)
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

int Engine::temperatureStat(int newTemperature, Engine::Voltage voltageTemp)
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
   
    if (latitude !=0 && longtitude != 0) //fixed 
    {
        return latitude + longtitude; //car move
    }
    return 0; // car stop
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
 
    struct DataRecovery //fixed
    {
        int memoryCapa = 100;
        bool memoryRead = false;
        char dateStamp = 'n';
        void maxMemory(int maximumMemory = 100);
    };
    void playerSongList(int PlayerSongList,DataRecovery recovery );
    void fileNameList(char newFileName, DataRecovery recovery);
    void terisGame(bool tetrisOn,DataRecovery recovery);
};
void OperatingSystem::playerSongList(int PlayerSongList, OperatingSystem::DataRecovery recovery)
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
void OperatingSystem::fileNameList(char newFileName, OperatingSystem::DataRecovery recovery)
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
void OperatingSystem::terisGame(bool tetrisOn, OperatingSystem::DataRecovery recovery)
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

    bool heartRateBPM(int heartBpm);
    char faceType(char readCameraData);
    char voiceType(char getType);


};
bool HumanInterface::heartRateBPM(int heartBpm) // i think boolean return valve is makesense
{
    if(alcoholPercentage > 40 && heartBpm > 100 ) //add heartBpm
    {
        return false;  //fixed
    }
    return  true;
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
        return true; // fixed
    }
    return false;
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
    Example::main();
    std::cout << "good to go!" << std::endl;
}
