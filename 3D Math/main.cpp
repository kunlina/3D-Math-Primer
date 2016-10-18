//
//  main.cpp
//  3D Math
//
//  Created by 梅宇宸 on 16/9/20.
//  Copyright © 2016年 梅宇宸. All rights reserved.
//

#include "3DMath.h"

int main(int argc, const char * argv[])
{
    RotationMatrix m;
    
    m.m11 = 0.866f; m.m12 = 0.0f;   m.m13 = -0.5f;
    m.m21 = 0.0f;   m.m22 = 1.0f;   m.m23 = 0.0f;
    m.m31 = 0.5f;   m.m32 = 0.0f;   m.m33 = 0.866f;
    
    Vector3 v1(10, 20, 30);
    Vector3 v2;
    
    v2 = m.inertial2Object(v1);
    v2.print();
    
    v2 = m.object2Inertial(v1);
    v2.print();
    
    return 0;
}
