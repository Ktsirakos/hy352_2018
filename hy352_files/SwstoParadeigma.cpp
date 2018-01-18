//
//  main.cpp
//  hy352_files
//
//  Created by Batzelios Thanos on 14/12/17.
//  Copyright © 2017 Batzelios Thanos. All rights reserved.
//

#include "hy352_gui.h"
#include <allegro5/allegro.h>
#include <stdarg.h>
#include <iostream>
#include <string>
#include <vector>

#include "LOGO.h"

START_PROGRAMM

MAKE turtleMoves = LIST [ 
	ARRAY {WORD: "FORWARD", NUMBER : 100 },
	ARRAY {WORD: "RIGHT", NUMBER: 90}, 
	ARRAY {WORD: "FORWARD", NUMBER: 100}, 
	ARRAY {WORD: "RIGHT", NUMBER: 90}, 
	ARRAY {WORD: "FORWARD", NUMBER: 100}, 
	ARRAY {WORD:  "LEFT", NUMBER: 90}, 
	ARRAY {WORD: "FORWARD", NUMBER: 100}, 
	ARRAY {WORD:  "LEFT", NUMBER: 90}
	] 
	 
	CENTER
	SETSCREENCOLOR [NUMBER:255 , NUMBER:255 , NUMBER:255]
	SETPENCOLOR [NUMBER:0,NUMBER:0,NUMBER:0] 
		REPEAT 2 TIMES DO  
			FOREACH turtleMoves DO   
				IF ITEM ({1}, ELEM) == (WORD:"FORWARD") DO    
					FORWARD ITEM ({2}, ELEM)   
					ELIF ITEM ({1}, ELEM) == (WORD: "BACK") DO   
						BACK ITEM ({2}, ELEM) 
					ELIF ITEM ({1}, ELEM) == (WORD: "LEFT") DO    
						LEFT ITEM ({2}, ELEM) 
					ELSE    
						RIGHT ITEM ({2}, ELEM)  
				END  
			END 
		END 
		
		PENUP
		CENTER  
		RIGHT NUMBER: 90 
		FORWARD NUMBER: 150 
		LEFT NUMBER:180
		
		PENDOWN
		REPEAT 360 TIMES DO 
			FORWARD NUMBER: 2 
			LEFT NUMBER: 1 
		END


		SETXY  NUMBER:35,NUMBER:12



//FORWARD 100
//RIGHT 90
//FORWARD 100
//RIGHT 90
//FORWARD 100
//LEFT 90
//FORWARD 100

END_PROGRAMM

