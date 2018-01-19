#include "hy352_gui.h"
#include <allegro5/allegro.h>
#include <stdarg.h>
#include <iostream>
#include <string>
#include <vector>

#include "LOGO.h"

START_PROGRAMM


MAKE turtleMoves = LIST [
                         
                         ARRAY {
                         ARRAY {WORD: "LEFT", NUMBER : 90 },
                         ARRAY {WORD: "FORWARD", NUMBER: 150},
                         ARRAY {WORD: "RIGHT", NUMBER: 90},
                         ARRAY {WORD: "FORWARD", NUMBER: 100},
                         ARRAY {WORD: "RIGHT", NUMBER: 90},
                         ARRAY {WORD: "FORWARD", NUMBER: 100},
                         ARRAY {WORD: "RIGHT", NUMBER: 90},
                         ARRAY {WORD:  "FORWARD", NUMBER: 100},
                         ARRAY {WORD:  "LEFT", NUMBER: 180},
                         ARRAY {WORD:  "FORWARD", NUMBER: 400},
                         ARRAY {WORD:  "RIGHT", NUMBER: 90},
                         ARRAY {WORD:  "FORWARD", NUMBER: 100},
                         ARRAY {WORD:  "RIGHT", NUMBER: 90},
                         ARRAY {WORD:  "FORWARD", NUMBER: 400},
                         ARRAY {WORD:  "LEFT", NUMBER: 90},
                         ARRAY {WORD:  "FORWARD", NUMBER: 100},
                         ARRAY {WORD:  "LEFT", NUMBER: 90},
                         ARRAY {WORD:  "FORWARD", NUMBER: 100},
                         ARRAY {WORD:  "LEFT", NUMBER: 90},
                         ARRAY {WORD:  "FORWARD", NUMBER: 100},
                         ARRAY {WORD:  "LEFT", NUMBER: 90},
                         ARRAY {WORD:  "FORWARD", NUMBER: 100},
                         ARRAY {WORD:  "RIGHT", NUMBER: 90},
                         ARRAY {WORD:  "FORWARD", NUMBER: 50}
                         },
                         
                         ARRAY {
                             ARRAY {WORD:  "LEFT", NUMBER: 90},
                             ARRAY {WORD:  "FORWARD", NUMBER: 100}
                         }
                         
                         ]

MAKE firstmoves = ITEM({1} , turtleMoves)
MAKE secondmoves = ITEM({2} , turtleMoves)
FOREACH firstmoves DO
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

PENUP
FOREACH secondmoves DO
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
PENDOWN


PRINT WORD:"Mas gamhsate"

PENUP
SETXY [NUMBER:0,NUMBER:0]



END_PROGRAMM
