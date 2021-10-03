## Abstract
In this project, a 4x4 matrix Keypad and 16x2 LCD are interfaced with Arduino Mega 2560 to display the entered key in the LCD screen.

## Hardware Components:

 - Arduino Mega 2560
 - 4x4 Matrix Keypad
 - 16x2 LCD

## Development Tools Used:

- PROTEUS 8 - for simulation
- Arduino - for programming

## Hardware Connection:

- D14 of Arduino Mega to LCD D4 pin 
- D15 of Arduino Mega to LCD D5 pin
- D16 of Arduino Mega to LCD D6 pin
- D17 of Arduino Mega to LCD D7 pin
- D13 of Arduino Mega to LCD RS pin
- D12 of Arduino Mega to LCD EN pin
- LCD R/W pin to Ground
- D5, D4, D3, D2 of Arduino Mega pins are connected to A, B, C, D row pins of the keypad
- D9, D8, D7, D6 of Arduino Mega pins are connected to 1, 2, 3, 4 column pins of the keypad
- D0 and D1 of Arduino Mega pins are connected to TXD and RXD pin of Serial Monitor

## Usage:
- Download the schematic.pdsprj file->open in PROTEUS 8 tool.

<img src=https://user-images.githubusercontent.com/84024571/135744903-81ceaa8e-c7b4-4a46-927d-5909bdcf0eb3.PNG width="800" height="400">

- Download code. ino and open in the Arduino tool.
- Go to tools->Select Boards->select Arduino Mega 2560.
- Click on “Verify” button and copy the generated hex file path from Arduino as described in this link
  https://www.instructables.com/HOW-TO-GET-HEX-FILE-FROM-ARDUINO-/
- Go to PROTEUS 8->Click on Arduino Uno->Edit Component window will pop up ->paste the hex file path in       Program file->Click OK.
<img src=https://user-images.githubusercontent.com/84024571/132992989-2161269d-0baf-4f56-9f3c-890b1d71bbe5.PNG width="800" height="400">
- Click on the Run button.

## Output:
<img src=https://user-images.githubusercontent.com/84024571/135745068-8a67675f-263b-4073-827c-fcdf80ba5796.PNG width="800" height="400">






