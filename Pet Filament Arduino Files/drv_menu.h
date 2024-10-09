#ifndef DRV_MENU_H
#define DRV_MENU_H

  extern int set_temp;
  extern int set_motor_velo;

void drv_menu_init(void);
void drv_menu_update(float real_temp);

int drv_menu_get_temp(void);
int drv_menu_get_velo(void);


#endif