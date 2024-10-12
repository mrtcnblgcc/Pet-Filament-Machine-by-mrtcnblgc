// written by mrtcnblgc at 24.03.2024, 23:57
// Work with 2 menu items. In beginning, shows custom and const page
// And after select 2 items in menu. First menu Set Temp. And if you are there and push ok button, you can increase or decrease temparature value (t_exp)


#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

Adafruit_SSD1306 lcd(128, 64, &Wire, 4);

#define btn_down 7
#define btn_up 8
#define btn_ok 9

bool down, up, ok, submenu = false;
int menu = 1;

extern int set_temp = 0;
extern int set_motor_velo = 0;

void drv_menu_init() {
  lcd.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  lcd.clearDisplay();
  lcd.setTextSize(1);
  lcd.setTextColor(WHITE);
  lcd.setCursor(5, 15);
  lcd.print("Pet Filament Machine");
  lcd.setCursor(5, 30);
  lcd.print("---By mrtcnblgc---");
  lcd.display();
  delay(50);

  pinMode(btn_down, INPUT);
  pinMode(btn_up, INPUT);
  pinMode(btn_ok, INPUT);

}

void drv_menu_update(float real_temp) {

  down = digitalRead(btn_down);
  up = digitalRead(btn_up);
  ok = digitalRead(btn_ok);
  
  //Change submenu when press ok button
  if (!ok) {
    delay(100);
    if (!ok) {
      submenu = ! submenu;
    }
  }

  // If press button down
  if (!down) {
    delay(100);
    if (!down) {
      //And if there isn't go any submenu then change 
      if (submenu == 0) {
        menu--;
        if (menu > 2) menu = 1;
        else if (menu < 1) menu = 2;
      }

      else if (submenu == 1) {

        if (menu == 1) {
          set_temp -= 10;
          if (set_temp < 0) set_temp = 0;
          else if (set_temp > 270) set_temp = 270;
          lcd.clearDisplay();
          lcd.setCursor(5, 15); lcd.print("Set Temp:");
          lcd.setCursor(10, 30); lcd.print(set_temp);
          //lcd.setCursor(10, 30); lcd.print("> Set Temp:"); lcd.print(set_temp);
        }

        else if (menu == 2) {
          set_motor_velo -= 10;
          if (set_motor_velo < 0) set_motor_velo = 0;
          else if (set_motor_velo > 100) set_motor_velo = 100;
          lcd.clearDisplay();
          lcd.setCursor(5, 15); lcd.print("Set Motor:");
          lcd.setCursor(10, 30); lcd.print(set_motor_velo);
        }
      }
    }
  }

  if (!up) {
    delay(100);
    if (!up) {
      if (submenu == 0) {
        menu++;
        if (menu > 2) menu = 1;
        else if (menu < 1) menu = 2;
      }
      else if (submenu == 1) {
        if (menu == 1) {
          set_temp += 10;
          if (set_temp < 0) set_temp = 0;
          else if (set_temp > 270) set_temp = 270;
          lcd.clearDisplay();
          lcd.setCursor(5, 15); lcd.print("Set Temp:");
          lcd.setCursor(10, 30); lcd.print(set_temp);
          //lcd.setCursor(10, 30); lcd.print("> Set Temp:"); lcd.print(set_temp);
        }
        else if (menu == 2) {
          set_motor_velo += 10;
          if (set_motor_velo < 0) set_motor_velo = 0;
          else if (set_motor_velo > 100) set_motor_velo = 100;
          lcd.clearDisplay();
          lcd.setCursor(5, 15); lcd.print("Set Motor:");
          lcd.setCursor(10, 30); lcd.print(set_motor_velo);
        }
      }
    }
  }

  if (submenu == 0) {
    lcd.clearDisplay();
    lcd.setTextSize(0); lcd.setTextColor(WHITE);
    lcd.setCursor(1, 1); lcd.print("Temprature:"); lcd.print(set_temp); lcd.print("/"); lcd.print(real_temp);
    lcd.setCursor(1, 10); lcd.print("Motor %:"); lcd.print(set_motor_velo);
    lcd.setCursor(0, 20); lcd.print("---------------------");
    if (menu == 1) {
      lcd.setCursor(10, 30); lcd.print("> Set Temp:"); lcd.print(set_temp);
      lcd.setCursor(10, 40); lcd.print("  Set Motor:"); lcd.print(set_motor_velo);
    }
    else if (menu == 2) {
      lcd.setCursor(10, 30); lcd.print("  Set Temp:"); lcd.print(set_temp);
      lcd.setCursor(10, 40); lcd.print("> Set Motor:"); lcd.print(set_motor_velo);
    }
  }

  lcd.display();
}

int drv_menu_get_temp(void) {
  return set_temp;
}

int drv_menu_get_velo(void) {
  return set_motor_velo;
}
