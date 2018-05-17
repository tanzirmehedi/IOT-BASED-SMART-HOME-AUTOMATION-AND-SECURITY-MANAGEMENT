
# Abstract

A home is the place where people usually spend a lot of quality time. Human race has always made endless efforts, trying to achieve comfort combined with simplicity. That’s the reason why we actually ended by with the concept of “Smart Home”. In this project we implement IOT Based Home Automation and Security Management. This framework is featured to be handy but yet secured. This system use mobile communication device, which gives access to smart phones, using low power. It is low cast but safe and reliable. UNO Arduino microcontroller or MEGA Arduino microcontroller is the Central Processing Unit. It processed all proposed system. In this project the gas sensors, fire sensor, rain sensor, temperature sensor, IP camera, IR light, Motion sensor, water sensor, ultrasonic sensor, LDR, obstacle sensor and PIR sensors are used for security purpose as well as automation system . According to the sensor’s signals received sensing signals by microcontroller, a message will be send is established to mobile station through a GSM module and thus warns the presence of unauthorized user in the home to owner occupier.

# Keywords

UNO Arduino, Mega Arduino, Gas sensors, Fire sensor, Rain sensor, Temperature sensor, Sound Sensor, IP camera, IR light, Motion sensor, Water sensor, Ultrasonic sensor, LDR, Obstacle sensor, PIR sensors, GSM module, power LED Indicator, LCD Display, Keypad, Servo motor, Rombo motor (Mobile Phone), Laser Light, Relay.


# Introduction

The advancement in the technology has made us to enter into a different world where we can interact with the objects. The virtual view over the internet has been extended into the physical world on the objects surrounding us. The Internet of Things is the interface of physical devices nested with electronics, software, sensors, and network connectivity that enables the devices to transfer the data. In other words it can be specified as a simple way of connecting a physical device to an internet. Everything is becoming smarter now-a-days with the help of Internet of Things. This includes everything starting from smart phones, smart homes, smart cities, intelligent transportation, etc. Each and every thing is uniquely identifiable through its computing system but it is able to interoperate with the existing internet infrastructure.



# IOT in Home Automation and Security

Recently many controlled devices such as Arduino are being developed using Internet of Things to help controlled the home appliances and home security purpose. Smart home automation system is increasingly used due to the endless efforts of Humans. From a social point of view, residents are admitted to smart homes for comfort combined with simplicity. And also luxury, improving quality of live, and for providing security against intrusion, breaking and entering. Secondly, home automation is achieved using a single controller, monitoring and the controlling many interconnected electronic appliances. Smart homes are cheap, low-power, cost effective, efficient, and realize the automation of a variety of domestic appliances using user-friendly interface any other handheld devices. This idea will be more helpful for handicapped patients, and people with disabilities can benefit from this smart home to totally operate, with high performance, all appliances and devices from anywhere in the house. 


# Importance of the project

This project combined embedded system technology and mobile technology. In this system two-way communication is established between the mobile user and the visitors. The person can know the visitor motion from any remote location and also secures the home from strangers and intruders. This System contains user mobile which includes user modes options such as active and hibernate mode. The user mobile also includes options for viewing the motion of the visitors, turning on and off the electronic devices in home at particular time, two way communication facility, and offline option and activating alarm system etc. This system controls all electronics home appliances viewing of the house interiors for surveillance purposes and provides an indication in case of any occurrence of violation.



# Arduino microcontroller

Variety of microprocessors and controllers are used in the design of Arduino. Digital and analog input/output (I/O) pins are equipped in boards that may be interfaced to various expansion boards and
Other circuits. Serial communications interfaces is a feature in this board, including Universal Serial Bus (USB) on some models, which are also used for loading programs from personal computers. The microcontrollers are programmed using features from the programming languages C and C++.

# Arduino:

Arduino is an open-source platform used for building electronics projects. Arduino consists of both a physical programmable circuit board (microcontroller) and a piece of software, or IDE that runs on your computer, used to write and upload computer code to the physical board.

               




# Microcontroller:

	It is a micro-computer. As any computer it has internal CPU, RAM, and IO interface.

o	Microcontroller = internally (CPU+RAM+IO interface) integrated device

	It is used for control purposes, and for data analysis.

	Must Need a Programmer. 

o	Work as, both Master or Slave device.

o	Famous microcontroller manufacturers are Microchip, Atmel, at mega, Intel, IBM etc.




# An Arduino Consists

	It has 54 digital input/output pins (of which 14 can be used as PWM outputs). 

	16 analog inputs.

	4 UARTs (hardware serial ports).

	A 16 MHz crystal oscillator.

	A USB port. 

	A power jack and 

	A reset button.



# Technical Specification:

	Microcontroller ATmega2560

	Operating Voltage 5V

	Input Voltage (recommended) 7-12V

	Input Voltage (limits) 6-20V

	Digital I/O Pins 54 (of which 14 provide PWM output)

	Analog Input Pins 16

	DC Current per I/O Pin 40 mA

	DC Current for 3.3V Pin 50 mA

	Flash Memory 256 KB of which 8 KB used by bootloader

	SRAM 8 KB

	EEPROM 4 KB

	Clock Speed 16 MHz




# The power:

	VIN: The input voltage to the Arduino board when it's using an external power source (as opposed to 5 volts from the USB connection or other regulated power source). You can supply voltage through this pin, or, if supplying voltage via the power jack, access it through this pin.

	5V: The regulated power supply used to power the microcontroller and other components on the board. This can come either from VIN via an on-board regulator, or be supplied by USB or another regulated 5V supply.

	3V3:  A 3.3 volt supply generated by the on-board regulator. Maximum current draw is 50 mA.

	GND: Ground pins. 


# Memory: 

The ATmega2560 has 256 KB of flash memory for storing code (of which 8 KB is used for the bootloader), 8 KB of SRAM and 4 KB of EEPROM (which can be read and written with the EEPROM library). 


# Input Output pins: 

Each of the 54 digital pins on the Mega can be used as an input or output, using pinMode(), digitalWrite(), and digitalRead() functions. They operate at 5 volts. Each pin can provide or receive a maximum of 40 mA and has an internal pull-up resistor (disconnected by default) of 20-50 kOhms.

In addition, some pins have specialized functions:

	Serial: 0 (RX) and 1 (TX); 

	Serial 1: 19 (RX) and 18 (TX); 

	Serial 2: 17 (RX) and 16 (TX); 

	Serial 3: 15 (RX) and14 (TX). 

Used to receive (RX) and transmit (TX) TTL serial data. Pins 0 and 1 are also connected to the
Corresponding pins of the ATmega8U2 USB-to-TTL Serial chip.

# Aware of:

	The board can operate on an external supply of 6 to 20 volts.

	If supplied with less than 7V, however, the 5V pin may supply less than five volts and the board may be unstable.

	If using more than 12V, the voltage regulator may overheat and damage the board. 


# Sensors:

PIR (Passive Infrared Radiation) Sensor (Digital Sensor)

Technical Details and circuit diagram with arduino

	PIR sensor has three terminals :  Vcc, OUT and GND. 

	Connect the +Vcc to +5v on Arduino board.

	Connect OUT to digital pin on Arduino board.

	Connect GND with GND on Arduino.



# Temperature  and Humidity Sensor (DHT22) –Digital Sensor: 

Technical Details:

	Power − 3-5V

	Max Current − 2.5mA

	Humidity − 0-100%, 2-5% accuracy

	Temperature − 40 to 80°C, ±0.5°C accuracy


               

# Water Level Sensor (Digital Sensor)

Technical Details

	Water Level sensor has four terminals – 

o	A0,D0,Vout(+), and GND (-). 

o	Connect the sensor as follows −

	Connect the +Vs to +5v on your Arduino board.

	Connect A0 to digital pin number 8 on Arduino board.

	Connect GND with GND on Arduino.


# Ultrasonic Sensor (HC-SR04) - Digital Sensor

Technical Details

	Power Supply − +5V DC

	Quiescent Current − <2mA

	Working Current − 15mA

	Effectual Angle − <15°

	Ranging Distance − 2cm – 400 cm/1″ – 13ft

	Resolution − 0.3 cm

	Measuring Angle − 30 degree

	Connect the +5V pin to +5v on your Arduino board.

	Connect Trigger to digital pin 7 on your Arduino board.


# Rain sensor -Digital Sensor

Technical Details

	VCC: 5V DC 

	GND: ground 

	DO: high/low output 

	AO: analog output 


# Gas sensor -Digital Sensor

Technical Details

	Voltage: 5V

	Detecting concentration :

o	200-10000ppm LPG 

o	iso-butane

o	propane

o	LNG

	Analog and Digital Output

	Digital Out is High or Low based on a adjustable preset threshold.


# Fire sensor -Digital Sensor

Technical Details

•	Extremely sensitive to wavelength between 760-1100nm

•	Power supply indicator lamp

•	Comparator output indicator lamp

•	AO, real-time thermistor voltage signal output

•	DO, high / low electric level signal output

•	Analog quantity output

•	Threshold rollover electric level output

•	Threshold adjusted by potentiometer

•	Detection Angle Range: About 60 degrees

•	Power Supply: 3.3-5.5 V DC
                              

# Obstacle sensor -Digital Sensor

Technical Details

	If there is an obstacle, the green indicator light on the circuit board.

	Detection distance: 2 ~ 60cm

	Detection angle: 35 °

	Comparator chip: LM393

	3mm screw holes for easy mounting

	Dimensions: 3.1 x 1.5cm

	Working Voltage:3.3 V to 5 V.


# Servo Motor

Technical Details

	Dimension 23x12.2x29mm

	Stall torque 1.8kg/cm(4.8V)

	Operating speed 0.1sec/60degree(4.8v)

	Operating voltage 4.8V

	Temperature range0 -55C

	Dead band width 10us

                                
# IP Camera

Technical Details

	Detection distance: 25 foot

	Detection angle: 360 °

	Comparator chip: LM393

	Dimensions: 3.1 x 1.5cm

	Working Voltage: 5 V.

	Working Current: 1.5mA




# Outcome of the project:
Based on Arduino Uno and mega microcontroller as central controller a design concept for a mobile based real-time home automation system has been obtained. There are two modes in this system, the first mode in which the user can monitor and control all the home appliances through their mobile phones from any parts of the world or even in home by using Wi-Fi communication.

# Conclusion

Based on Arduino Uno and mega microcontroller as central controller a design concept for a mobile based real-time home automation system has been obtained. There are two modes in this system, the first mode in which the user can monitor and control all the home appliances through their mobile phones from any parts of the world or even in home by using Wi-Fi communication. The second mode was a self-automated mode that made the Arduino Uno and mega controller to control and monitor appliances in the home automatically by the signals received from related sensors. To verify the reliability of the system a hardware implementation of the system was carried out. The system which is implemented was a simple, low cost and flexible that can be expanded and scaled up. Using GSM sensor technologies a future improvement can be added to the proposed system. The proposed system can also be used to detect the gas leakages and fire detected in home. It can also be used to detect the motion of the person for that PIR sensor is used as well as monitoring the home all over the world with Wi-Fi using IP camera and continue two way communication with home by a mobile GSM and rombo motor. Also monitoring all side by laser light technology by LDR sensor. 

# Future Extension

Identifying the problem and gathering a solution, an initial system planning combined with the feasibility analysis, the requirements and maintenance concept of the smart home was discussed. The performance measures and the functional analysis are also discussed. Many prototypes and choices were presented (COTS, and custom made choices) and as far as we went through this phase, system specifications and system review were done. When the smart home conceptual idea was done, we rushed into the preliminary (subsystem) phases. The first step was developing a design requirement. This requirement process will then be followed by the subsystems which contains security, control, entertainment, comfort, energy were accomplished with functional analysis with their level where the use of appropriate tools  and technologies were applied along with choosing the products, process, and materials as there were many tradeoffs. Finally, a formal review was sent to the customer with the impact of environmental, economical, and social effects. As the requirements were the first rational step to begin, the final phase in production is the detailed design handling the specific components of the project.



# References

[1]. Ganesh Prabhu.S, Sangeetha.S, Shanmathi.S, Sharmila.M "Automatic Toll E-Ticketing for Transportation Systems", SSRG International Journal of Electronics and Communication Engineering.
[2]. http/www.mectronicsdesgin.com
[3]. http/www.automationbulding.com
[4]. Division of building services engineering chalmers university of technology göteborg
[5].http://www.homedepot.com/Electrical-Home Automation/h_d1/N
[6].http://www.adt.com/home-security/learningcenter/securitytopics/ technology security/homeautomation-systems-for-all
[7].http://www.adt.com/home-security/learningcenter/securitytopics/ technology-security/remotehome-monitoring-from-yoursmartphone
[8].http://www.adt.com/home-security/learningcenter/securitytopics/ technology-security/makeyour-home-smart
[9].http://www.electronics-lab.com/projects/test/ 014/index.html

