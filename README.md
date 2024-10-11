# Pet-Filament-Machine-by-mrtcnblgc

Making PET filament for 3D Printer from PET bottles.

## Part List:
#### **Electronical :**
- 200V AC to 12V DC/5A power supply. 
- Arduino Mini (5V, 16 Mhz).
- A4988 Step Motor Driver.
- SSD1306 OLED Display.
- 12V Heater.
- IRFZ44N Mosfet.
- 100k Ohm Thermistor.
- LM317T Voltage Regulator.
- Switch.
- Capacitors (2x4.7uF, 1x100nF).
- Resistors (1x100r, 1x330r, 5x10k, 1x1k, 1x4.7k).
- 2.54mm Male and Female Connectors.

#### **Mechanical :**
- 3D Printed parts. I'm using ecodecat3d's STL files for gear set. You can visit him/her site (https://sites.google.com/view/makeyourownecopet/inicio).
- 4x 608zz model ruller for gear set.
- Some dimensions screws and nuts.
- 3D Printer extruder set. (Heating block and nozzle) You need to expand the nozzle to 1.75mm.
- L shaped metal shelf holder for hold extruder.
- 3D Printed bottle cutter. I'm using this (https://www.thingiverse.com/thing:5442876).
- Suitable pieces of wood for the floor

## Instructions
### Mechanical Instruction
A wooden or similar base is required where you will place the gear box and heater block. First, you need to create the gear box, connect the motor to the gear box. Then, you should place the heater block in line with the gear box. I placed the power supply behind the wooden block that I used. If you want, you can place it in an independent place. You can also place the piece that we will use to cut the pet bottles on this wooden base like I did.

1.1) Placing gearbox and heater block.

<img src="https://github.com/mrtcnblgcc/Pet-Filament-Machine-by-mrtcnblgc/blob/main/Photos/1.1%20placing%20gearbox%20and%20heater%20block.jpg" width="600" height="300" />

1.2) Placing power supply and the piece we will use to cut the PET bottles

<img src="https://github.com/mrtcnblgcc/Pet-Filament-Machine-by-mrtcnblgc/blob/main/Photos/1.2%20placing%20power%20supply.jpg" width="600" height="300" />

### Electronical Instruction
I installed the electronic card on a perforated board. However, a printed circuit board can also be produced. The schematic is as follows:

Schematic;

<img src="https://github.com/mrtcnblgcc/Pet-Filament-Machine-by-mrtcnblgc/blob/main/Photos/schematics.png" width="600" height="300" />

Creating the circuit on a perforated board;

2.1)Electronic circuit and OLED screen

<img src="https://github.com/mrtcnblgcc/Pet-Filament-Machine-by-mrtcnblgc/blob/main/Photos/2.1%20electronic%20circuit%20and%20oled%20screen.jpg" width="500" height="500" />

2.2) Behind the circuit;

<img src="https://github.com/mrtcnblgcc/Pet-Filament-Machine-by-mrtcnblgc/blob/main/Photos/2.2%20circuit%20behind.jpg" width="500" height="500" />

3.1) Initial menu view;

<img src="https://github.com/mrtcnblgcc/Pet-Filament-Machine-by-mrtcnblgc/blob/main/Photos/3.1%20men%C3%BC%20init.jpg" width="600" height="400" />

3.2) In general menu;

<img src="https://github.com/mrtcnblgcc/Pet-Filament-Machine-by-mrtcnblgc/blob/main/Photos/3.2%20men%C3%BC.jpg" width="600" height="400" />

The right arrow button is the "OK" button. The left button is the "DOWN" button and the middle button is the "UP" button. 

To operate the heater at the desired value, press the "OK" button once while the ">" symbol is on "Set Temp". There will be no change on the screen. However, when you press the "UP" button, the value will increase by ten. Similarly, when you want to decrease, press the "DOWN" button. The value will decrease by ten. When you reach the desired value, you will return to the main menu when you press the "OK" button.

You must do the same to operate the engine and adjust its speed. You must press the "UP" and "Down" buttons to navigate between "Set Temp" and "Set Motor" in the menu.

