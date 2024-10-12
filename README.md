# Pet-Filament-Machine-by-mrtcnblgc

Making PET filament for 3D Printer from PET bottles.

## Part List:
#### **Electronical :**
- 220V AC to 12V DC/5A power supply. 
- Arduino Pro Mini (5V, 16 Mhz).
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

## Installation 
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

You must do the same to operate the step motor and adjust its speed. You must press the "UP" and "Down" buttons to navigate between "Set Temp" and "Set Motor" in the menu.

# Process
If you have installed mechanical and electronical things you are ready process of making filament from PET, congraculations! :)

First, you need cut the top and bottom side of the bottle. After this, you will need to make a small splinter-shaped cut on the end of the bottle to be able to insert it into the plastic bottle slicer.

<img src="https://github.com/mrtcnblgcc/Pet-Filament-Machine-by-mrtcnblgc/blob/main/Photos/4.1%20process%20cut%20the%20bottle.jpg" width="600" height="400" />

<img src="https://github.com/mrtcnblgcc/Pet-Filament-Machine-by-mrtcnblgc/blob/main/Photos/4.2%20process%20bottle%20slicing%201.jpg" width="600" height="400" />

<img src="https://github.com/mrtcnblgcc/Pet-Filament-Machine-by-mrtcnblgc/blob/main/Photos/4.2%20process%20bottle%20slicing%202.jpg" width="600" height="400" />

And final result;

<img src="https://github.com/mrtcnblgcc/Pet-Filament-Machine-by-mrtcnblgc/blob/main/Photos/4.3%20process%20bottle%20slicing%20final.jpg" width="600" height="400" />

After slicing the bottle, we slice the PET thinner. Then, while the heater is cold, we pass it through the heater. 

<img src="https://github.com/mrtcnblgcc/Pet-Filament-Machine-by-mrtcnblgc/blob/main/Photos/4.4%20inserting%20sliced%20%E2%80%8B%E2%80%8Bpet%20into%20the%20heater.jpg" width="600" height="400" />

After passing, we heat the heater between 180°C and 200°C. When the heater reaches the desired temperature, we compress the filament that comes out with a pipe-like object to the rope connected to the gear. After this process, we start the motor and let it wind. And here is our filament!

<img src="https://github.com/mrtcnblgcc/Pet-Filament-Machine-by-mrtcnblgc/blob/main/Photos/final.jpg" width="600" height="400" />

Video link; [click here](https://www.youtube.com/watch?v=tgluLH4R5xo)


