//Copyright (c) 2011-2020 <>< Charles Lohr - Under the MIT/x11 or NewBSD License you choose.
// NO WARRANTY! NO GUARANTEE OF SUPPORT! USE AT YOUR OWN RISK

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "os_generic.h"
#include <GLES3/gl3.h>
#include <asset_manager.h>
#include <asset_manager_jni.h>
#include <android_native_app_glue.h>
#include <android/sensor.h>
#include "CNFGAndroid.h"

#define CNFG_IMPLEMENTATION
#define CNFG3D

#include "CNFG.h"


#include <stdio.h>
#include<stdlib.h>

int main(int quantity, char  **number) {    

     int  sum;
    
    // printf("Enter two integers: ");
    
    // scanf("%d %d", &number1, &number2);

    // calculating sum
    // sum = number1 + number2;      
    sum=1;

    // printf("%s %s", number[1], number[2]);
    int num1 = atoi(number[1]); 
    int num2 = atoi(number[2]); 
    sum = num1 + num2;
    printf("%d + %d = %d", num1, num2, sum);
    
    return 0;
}

	
