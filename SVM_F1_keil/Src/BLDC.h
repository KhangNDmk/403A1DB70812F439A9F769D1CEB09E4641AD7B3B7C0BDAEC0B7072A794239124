#ifndef BLDC_H
#define BLDC_H

#define VDC     12
#define VMAX    (2*VDC)/3

typedef struct 
{
    float Kp;
    float Ki;
    float Kd;
    float A0;
    float A1;
    float A2;
    float state[3];
    } pid_obj;

/**/
void pid_init(pid_obj *pid , float Kp, float Ki, float Kd);

/**/
float pid_controller(pid_obj* S , float in);


#endif
		
		