#include "tm4c1294ncpdt.h"
#include "functions.h"
void systemConfig()
{

    timerConfig();
    UARTConfig();
    configPortM();
    //configPortD();
}
