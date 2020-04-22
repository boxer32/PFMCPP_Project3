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
    //2) generator
    //2) temperature
    //2) transmittion
    //2) switch
//things it can do:
    //2) regulator output
    //2) temperature check
    //2) switch power on
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
    //2) barometer
    //2) accelerometer
    //2) gyroscope
    //2) cellular module
// things it can do:
    //2) latitude
    //2) direction 
    //2) tilt detection 
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
    //2) file browser
    //2) contact list
    //2) ebook reader
    //2) tetris game
//things it can do:
    //2) search playlist
    //2) open document
    //2) open tetris game
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
    //2) algoho detector
    //2) heart rate
    //2) EGG sensor
    //2) camera (for face detection)
//things it can do:
    //2) read heartrate
    //2) face scanner
    //2) detect voice
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
    //2) nearfield sensor
    //2) rain sensor
    //2) back camera
    //2) font camera
//things it can do:
    //2) switch to night vision mode 
    //2) switch rain mode 
    //2) near car alert
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
    //2) tempareture
    //2) charge status
    //2) charge circle
    //2) Battery loss
    
//things it can do:
    //2) power check
    //2) recharge battery
    //2) display batterry circle
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
    //2) coil spring tension
    //2) lower control ratio
    //2) gas valve 
    //2) Shock mount rail
// things it can do:
    //2) change coil tension
    //2) change lower control ratio
    //2) change gas pressure
};
/*
8) Smart Light Switch //1)write out, in plain-english, 5 traits and 3 things it can do.
5 properties:
    1) toggle switch
    2) dimmer
    3) pulse control
    4) light time
    5) usage time
3 things it can do:
    1) switch on 
    2) change dimmer
    3) alert light usage time
 */
struct SmartLightSwitch
{
//properties:
    //2) toggle switch
    //2) dimmer
    //2) pulse control
    //2) light time
    //2) usage time
//things it can do:
    //2) switch on 
    //2) change dimmer
    //2) alert light usage time
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
    //2) vibration sensor
    //2) door lock
    //2) keypad 
    //2) fingerprint sensor
//things it can do:
    //2) detect vibration 
    //2) auto lock
    //2) reset keypad 
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
    //2) Location
    //2) Operating system
    //2) Human interface
    //2) Sensor Array 
// things it can do:
    //2) CheckLocation 
    //2) open voice detection
    //2) DisplayStatus

};

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
