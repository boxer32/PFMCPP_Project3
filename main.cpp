/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1

 Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to reinforce the syntax habits that C++ requires.  What you create in this project will be used as the basis of Project 5 in the course.   
 
 1) write 10 user-defined types in plain-English, 
    in the comments above your UDT, write out, in plain-english, 3 things it can do, and 5 traits.
    Note: Your 10th UDT will use 5 of your UDTs for its properties, so maybe start on UDT #10 first. This goes along with instruction #6.
**********************
    Commit after you complete this step so i can review before you proceed with the rest of the projects
    Ping me in Slack to review this step.
    Wait for me to review before proceeding with step 2.
************************
  
 2) define your struct for each of your 10 types. 
    Copy your 3+5 comments into your struct body.
    comment them out.
 
 3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    give the member variables relevant data types
 
 4) make the function parameter list for those member functions use some of your User-Defined Types
    You'll write definitions in part2 for these functions
    you'll call each of these functions in part3
 
 5) make 2 of the 10 user-defined types have a nested class.  
    this nested class also needs member functions.
    this nested class is not considered one of your 10 UDTs.
 
 6) One of your 10 UDTs should only use UDTs for its member variable types.   
    No primitives allowed!
    it still needs member variables.
 
 7) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:  

//1) write out, in plain-english, 5 traits and 3 things it can do.
Car Wash   
5 properties:
    1) has vacuum cleaners
    2) has eco-friendly cleaning supplies
    3) stores the amount of water used per week.
    4) stores amount of profit made per week
    5) number of cars serviced per day

3 things it can do:
    1) wash and wax car
    2) charge customer
    3) detail the car interior
 */
struct CarWash //2)        
{
    //2) has vacuum cleaners
    bool hasVacuumCleaners = true; //3) member variables with relevant data types.
    //2) has eco-friendly cleaning supplies
    bool hasEcoFriendlyCleaningSupplies = true; //3) member variables with relevant data types.
    //2) stores the amount of water used per week.
    float waterUsedPerWeek = 200.f; //3) member variables with relevant data types.
    //2) stores amount of profit made per week
    float profitPerWeek = 495.95f; //3) member variables with relevant data types.
    //2) number of cars serviced per day
    int numberOfCarsServiced = 10; //3) member variables with relevant data types.
    
    //5) make 2 of the 10 user-defined types have a nested class. 
    struct Car   
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);   
    };

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) wash and wax car
    void washAndWaxCar( Car car );
    //2) charge customer
    float chargeCustomer();
    //2) detail the car interior
    void detailInterior( Car car );
    
               
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


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

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
