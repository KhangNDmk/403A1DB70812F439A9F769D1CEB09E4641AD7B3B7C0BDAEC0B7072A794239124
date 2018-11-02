#ifndef BLDC_H
#define BLDC_H

#define VDC     12
#define VMAX    (2*VDC)/3

typedef struct 
{
    float32_t Kp;
    float32_t Ki;
    float32_t Kd;
    float32_t A0;
    float32_t A1;
    float32_t A2;
    float32_t state[3];
    } pid_obj;


void pid_init(pid_obj *pid , float32_t Kp; float32_t Ki; float32_t Kd; )
{
    pid->Kp = Kp;
    pid->Ki= Ki;
    pid->Kd = Kd;
    pid->A0 =  Kp + Ki + Kd ;
    pid->A1 =  -Kp - 2*Kd ;
    pid->A2 = Kd ;
}

float32_t pid_controller(pid_obj* S , float32_t in);


#endif