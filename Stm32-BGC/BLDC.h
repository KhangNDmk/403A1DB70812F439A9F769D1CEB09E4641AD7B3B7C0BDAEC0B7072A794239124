#ifndef BLDC_H
#define BLDC_H

typedef struct 
{
    float32_t Kp;
    float32_t Ki;
    float32_t Kd;
    float32_t A0;
    float32_t A1;
    float32_t A2;
    float32_t state;
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

void pid_controller(pid_obj* pid , float32_t err_input)
{
    pid
}
#endif