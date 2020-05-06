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





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */

/*
1)  Engine //1)write out, in plain-english, 5 traits and 3 things it can do.
5 properties:
    1) regulator
    2) generator
    3) temperature
    4) transmittion
    5) switch
3 things it can do:
    1) regulator output
    2) temperature check
    3) switch power on
 */
struct Engine //2)define your struct  Copy your 3+5 comments into your struct body
{
    //properties:
    //2) regulator
    float regulator =        0.0f;//3) member variables with relevant data types
    //2) generator
    bool generator =         true;//3) member variables with relevant data types
    //2) temperature
    int temperature =        0;//3) member variables with relevant data types
    //2) transmittion
    bool transmittionLow =   true;//3) member variables with relevant data types
    //2) switch
    bool powerSwitch =       false;//3) member variables with relevant data types

    //5) make 2 of the 10 user-defined types have a nested class. 
    struct voltage 
    {
       int curent = 12;
       float resisstance = 0.1f;
       void maxCurent(int maximumCurent = 100);

     
    };

    //things it can do:
    //2) regulator output
    float regulatorFlow(float regulatorStat,voltage voltageFlow ); //4 function parameter list for those member functions use some of your User-Defined Types
    //2) temperature check
    int temperatureStat(int newTemperature, voltage voltageTemp); //4 function parameter list for those member functions use some of your User-Defined Types
    //2) switch power on
    bool powerSwitchStat(bool newPowerSwitchStat);

    //5) a member variable whose type is a UDT.
    voltage averageVoltage;
};
/*
2) Location //1)write out, in plain-english, 5 traits and 3 things it can do.
5 properties:
    1) gps module
    2) barometer
    3) accelerometer
    4) gyroscope
    5) cellular module
3 things it can do:
    1) latitude
    2) direction 
    3) tilt detection 
 */
struct Location //2)define your struct  Copy your 3+5 comments into your struct body
{
    // properties:
    //2) gps module
    int gpsLatitude,gpsLongtitude = 000000000;//3) member variables with relevant data types
    //2) barometer
    int barometorUnit = 0;//3) member variables with relevant data types
    //2) accelerometer
    float accelerometor = 0.0f; //3) member variables with relevant data types
    //2) gyroscope
    float xAxis,yAxis = 0.0f; //3) member variables with relevant data types
    //2) cellular module
    char cellularLocaton = 'N';//3) member variables with relevant data types
    // things it can do:
    //2) latitude
    int gpsLocation(int latitude, int longtitude);
    //2) direction 
    float accelerometerStat(int newAccelerometer); 
    //2) tilt detection 
    float gyroscopeStat(int newGyrometer);
};
/*
3) Operating System //1)write out, in plain-english, 5 traits and 3 things it can do.
5 properties:
    1) music player
    2) file browser
    3) contact list
    4) ebook reader
    5) tetris game
3 things it can do:
    1) search playlist
    2) open document
    3) open tetris game
 */
struct OperatingSystem //2)define your struct  Copy your 3+5 comments into your struct body
{
    //properties:
    //2) music player
    int musicPlayerSongList = 1; //3) member variables with relevant data types
    //2) file browser
    char fileName = 'a';
    //2) contact list
    char contactList = 'b';
    //2) ebook reader
    bool ebookOpen = true;
    //2) tetris game
    bool tetris = false;

    //5) make 2 of the 10 user-defined types have a nested class. 
    struct dataRecovery
    {
        int memoryCapa = 100;
        bool memoryRead = false;
        char dateStamp = 'n';
        void maxMemory(int maximumMemory = 100);
    };


    //things it can do:
    //2) search playlist
    void playerSongList(int musicPlayerSongList,dataRecovery recovery );
    //2) open document
    void fileNameList(char newFileName, dataRecovery recovery);
    //2) open tetris game
    void terisGame(bool tetrisOn,dataRecovery recovery);
};
/*
4) Human Interface //1)write out, in plain-english, 5 traits and 3 things it can do.
5 properties:
    1) voice control
    2) algoho detector
    3) heart rate
    4) EGG sensor
    5) camera (for face detection)
3 things it can do:
    1) read heartrate
    2) face scanner
    3) detect voice 
 */
struct HumanInterface //2)define your struct  Copy your 3+5 comments into your struct body
{
    //properties:
    //2) voice control
    bool voiceGenderDetection = true;//3) member variables with relevant data types
    //2) alcohol detector
    int alcoholPercentage = 0;//3) member variables with relevant data types
    //2) heart rate
    int heartRate = 0;//3) member variables with relevant data types
    //2) EGG sensor
    float alphaFreqquemcy = 0.0f;//3) member variables with relevant data types
    //2) camera (for face detection)
    char faceCamera = 'a';//3) member variables with relevant data types
    //things it can do:
    //2) read heartrate
    int heartRateBPM(int heartBpm);
    //2) face scanner
    char faceType(char readCameraData);
    //2) detect voice
    char voiceType(char getType);


};
/*
5) Sensor Array //1)write out, in plain-english, 5 traits and 3 things it can do.
5 properties:
    1) infared sensor
    2) nearfield sensor
    3) rain sensor
    4) back camera
    5) font camera
3 things it can do:
    1) switch to night vision mode 
    2) switch rain mode 
    3) near car alert
 */
struct SensorArray
{
//properties:
    //2) infared sensor
    bool infaredNightDetection = true;//3) member variables with relevant data types
    //2) nearfield sensor
    int nearfeildDistance = 100;//3) member variables with relevant data types
    //2) rain sensor
    bool rainDetection = false;//3) member variables with relevant data types 
    //2) back camera
    bool backCamera = true;//3) member variables with relevant data types
    //2) font camera
    bool fontCamera = true;//3) member variables with relevant data types
    //things it can do:
    //2) switch to night vision mode 
    void nightVision(bool nightVisionON);
    //2) switch rain mode 
    void rainMode(bool rainModeOn);
    //2) near field alert
    bool nearFieldAlert(int nearField);
};
/*
6) Battery //1)write out, in plain-english, 5 traits and 3 things it can do.
5 properties:
    1) power capacity
    2) tempareture
    3) charge status
    4) charge circle
    5) Battery loss
3 things it can do:
    1) power check
    2) recharge battery
    3) display batterry circle
 */
struct Battery
{   
    //properties:
    //2) power capacity
    int powerCapacity = 100;//3) member variables with relevant data types
    //2) battery tempareture
    int batteryTempareture = 100;//3) member variables with relevant data types

    //2) charge status
    bool chargeMode = true;//3) member variables with relevant data types
    //2) charge circle
    int chargeCircle = 0;//3) member variables with relevant data types
    //2) Battery loss
    int batteryLoss = 0;//3) member variables with relevant data types
    
    //things it can do:
    //2) power check
   int batteryCapacity(int newPowerCapacity, int NewBatteryTempareture);
    //2) recharge battery
   void rechargeStat(bool rechargeOn);
    //2) display batterry circle
   int batteryCircle(int NewBatteryCircle);
};
/*
7) Shock Absorber //1)write out, in plain-english, 5 traits and 3 things it can do.
5 properties:
    1) offRoadMode
    
    2) coil spring tension
    3) lower control ratio
    4) gas valve 
    5) Shock mount rail
3 things it can do:
    1) change coil tension
    2) change lower control ratio
    3) change gas pressure
 */
struct ShockAbsorber
{
    // properties:
    //2) offRoadMode
    bool offRoadMode = false;//3) member variables with relevant data types
    //2) coil spring tension
    int coilTension = 15; //3) member variables with relevant data types
    //2) lower control ratio(x:1)
    int lowerControlRatio = 5;//3) member variables with relevant data types
    //2) gas valve 
    float gasValvePressure = 0.0f;//3) member variables with relevant data types
    //2) Shock mount rail
    int shockMountPosition = 5; //3) member variables with relevant data types
    // things it can do:
    //2) change coil tension
    int coilTensionStat(int newCoilTension);
    //2) change lower control ratio
    int lowerControl(int  newLowerControlRatio);
    //2) change gas pressure
    float gasPressure(float newGasPressure);

};
/*
8) Smart Light Switch //1)write out, in plain-english, 5 traits and 3 things it can do.
5 properties:
    1) toggle switch
    2) dimmer
    3) pulse control
    4) light color
    5) usage time
3 things it can do:
    1) switch on 
    2) change dimmer
    3) alert light usage time
 */
struct SmartLightSwitch
{
    //properties:
    //2) light toggle switch
    bool lightToggle = false;//3) member variables with relevant data types
    //2) dimmer
    float dimmerValve = 0.5f;//3) member variables with relevant data types
    //2) pulse control
    int emegencyLightPulse = 0;//3) member variables with relevant data types
    //2) light color
    char lightColor = 'R';//3) member variables with relevant data types
    //2) usage time
    int lightUsage = 0;//3) member variables with relevant data types

    //things it can do:
    //2) switch on 
    void lightOn(bool lightSwitch);
    //2) change dimmer
    void dimmer(float newDimmerValve);
    //2) alert light usage time
    int usageTime(int newLightUsage);
};
/*
9)  Anti Theft Device //1)write out, in plain-english, 5 traits and 3 things it can do.
5 properties:
    1) alarm
    2) vibration sensor
    3) door lock
    4) keypad 
    5) fingerprint sensor
3 things it can do:
    1) detect vibration 
    2) auto lock
    3) reset keypad 
 */
struct AntiTheftDevice
{
    //properties:
    //2) alarm
    bool alarmStat = false;
    //2) vibration sensor
    int vibration = 0;
    //2) door lock
    bool doorLockStat = true;
    //2) keypad 
    bool keypadPowerOn = false;
    //2) fingerprint sensor
    bool fingerprintSensorOn = false;
    //things it can do:
    //2) detect vibration 
    int vibrationValue(int vibrationParameter);
    //2) auto lock
    bool autoDoorLock (bool doorLock);
    //2) reset keypad 
    bool keypadReset(bool reset);
};
/*
10) Autonomous Car //1)write out, in plain-english, 5 traits and 3 things it can do.
5 properties:
 These 5 properties should be UDTs that you defined above.
 this goes along with the instruction:
    One of your 10 UDTs should only use UDTs for its member variable types.
    1) Enging
    2) Location
    3) Operating system
    4) Human interface
    5) Sensor Array 
3 things it can do:
    1) CheckLocation 
    2) open voice detection
    3) DisplayStatus
 */
 struct AutonomousCar
 {
    // One of your 10 UDTs should only use UDTs for its member variable types.   !No primitives allowed
    //2) Enging
    Engine  EngineStat;
    //2) Location
    Location LocationStat;
    //2) Operating system
    OperatingSystem OsStat;
    //2) Human interface
    HumanInterface InterfaceStat;
    //2) Sensor Array 
    SensorArray SensorStat ;

    // things it can do:
    //2) CheckLocation
    Location reportLocation(Location newLocation);  
    //2) open voice detection
    OperatingSystem roportOS(OperatingSystem OsData); 
    //2) DisplayStatus
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
