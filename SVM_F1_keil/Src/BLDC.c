#include "BLDC.h"

/* Khởi tạo giá trị cho bộ điều khiển PID */
void pid_init(pid_obj *pid , float Kp, float Ki, float Kd)
{
    pid->Kp = Kp;
    pid->Ki= Ki;
    pid->Kd = Kd;
    pid->A0 =  Kp + Ki + Kd ;
    pid->A1 =  -Kp - 2*Kd ;
    pid->A2 = Kd ;
}

/* Hàm tính toán PID*/
float pid_controller(pid_obj* S , float in)
{
    float out;

    /* y[n] = y[n-1] + A0 * x[n] + A1 * x[n-1] + A2 * x[n-2]  */
    out = (S->A0 * in) +
      (S->A1 * S->state[0]) + (S->A2 * S->state[1]) + (S->state[2]);

    /* Update state */
    S->state[1] = S->state[0];
    S->state[0] = in;
    S->state[2] = out;

    /* trả về giá trị output pid */
    return (out);
}

void test_bldc();
