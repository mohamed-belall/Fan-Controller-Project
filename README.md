# Fan-Controller-Project

## purpose
Design a temperature-based fan controller using the ***`ATmega32`*** microcontroller. The fan speed will be adjusted according to the temperature. Utilize the ATmega32 microcontroller operating at a frequency of 1MHz.

![image](https://github.com/mohamed-belall/Fan-Controller-Project/assets/77551534/c434ec25-aa75-4a92-af3f-d0fa7e7da2f6)


## Description

1. The `LM35 temperature sensor` provides a continuous analog output that corresponds to the sensed temperature.
2. The analog signal is input to the ADC, which then converts it into digital values.

3. The digital output of the `ADC` is equivalent to **sensed analog voltage**.

4. In order to get the temperature from the sensed analog voltage, we need to perform some calculations in the programming for the microcontroller.

5. Once the calculations are done by the microcontroller according to the logic, the temperature is displayed on the LCD. 

6. The microcontroller will continuously monitor the temperature and based on the temperature value, 
Microcontroller will drive the fan like that:

| Temperature (C)              |  Fan Speed (Percentage from Max) |
| :---                         |             :---:                |
| Less than 15                 | 0 %                             |
| 15 <= Temperature < 25       | 10 %                            |
| 25 <= Temperature < 35       | 20 %                            |
| 35 <= Temperature < 45       |  30 %                            |
| 45 <= Temperature < 55       |  40 %                           |
| 55 <= Temperature < 65       |  50 %                           |
| 65 <= Temperature < 75       |  60 %                           |
| 75 <= Temperature < 85       |  70 %                           |
| 85 <= Temperature < 95       |  80 %                           |
| 95 <= Temperature < 100       |  90 %                           |
|  100 <= Temperature        |  100 %                           |

6. The ***main principle*** of the circuit is to **switch on/off** the fan connected to **`DC Motor`** based on temperature value. The DC-Motor rotates in `Clock-Wise` direction or stopped based on the fan state.

7. The LCD should display the temperature value and the fan state continuously like 
that:

![]()

8. Control the DC-Motor speed using PWM signal generated from Timer0.

## Embedded Drivers Used

| Software Layered Model       | Driver Name |
| :---                         |     :---:  | 
| Application Layer (APP)               | Fan_Controller.c       | 
| Hardware Abstraction Layer (HAL)     | LCD  / LM35_Sensor / DC Motor | 
| MicroController Abstraction Layer (MCAL)     | GPIO / ADC / PWM       | 


