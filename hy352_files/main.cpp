//
//  main.cpp
//  hy352_files
//
//  Created by Batzelios Thanos on 14/12/17.
//  Copyright © 2017 Batzelios Thanos. All rights reserved.
//

#include "hy352_gui.h"
#ifdef APPLE
#include <allegro5/allegro.h>
#endif
#include <stdarg.h>
#include <iostream>
#include <string>
#include <vector>

#include "LOGO.h"

START_PROGRAMM


REPEAT 5 TIMES DO
	REPCOUNT
	SHOW: REPCOUNT
END
;SETSCREENCOLOR [NUMBER:255 , NUMBER:100 , NUMBER:0]


END_PROGRAMM

