#ifndef SVM_H
#define SVM_H


typedef struct 
{
    uint32_t duty_a;
    uint32_t duty_b;
    uint32_t duty_c;
} Motor_pwm;

typedef struct 
{
    float32_t Valpha
    float32_t Vbeta
} SVM_Vab;


float32_t SVPWM(SVM_Vab Vab0)
{
    float32_t a= 
}


	float a= fabs(Valpha)+fabs(Vbeta)/sqrt(3);
	float b= fabs(Valpha)-fabs(Vbeta)/sqrt(3);
	float c= 2/sqrt(3)*fabs(Vbeta);
#endif