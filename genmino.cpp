#include <cstdlib>
#include "genMino.h"
#define NUM_MINO 5
#define MINO_S 0
#define MINO_I 1
#define MINO_T 4
#define MINO_O 3
#define MINO_L 2

  Mino * genMino()
 {
     int mino_type;
     Mino * ptr;
    
     mino_type = random() % NUM_MINO;
    
     switch(mino_type) {
             case MINO_S:
			try{
             ptr = new MinoS;
				}
 catch(bad_alloc &memoryAlloc)
					{
                cerr << "Exception: " << memoryAlloc.what() << endl;
         				   }
             break;
             case MINO_I:
			try{
             ptr = new MinoI;
				}
 catch(bad_alloc &memoryAlloc)
					{
                cerr << "Exception: " << memoryAlloc.what() << endl;
         				   }
             break;
             case MINO_T:
			try{
             ptr = new MinoT;
				}
 catch(bad_alloc &memoryAlloc)
					{
                cerr << "Exception: " << memoryAlloc.what() << endl;
         				   }
             break;
             case MINO_L:
			try{
             ptr = new MinoL;
				}
 catch(bad_alloc &memoryAlloc)
					{
                cerr << "Exception: " << memoryAlloc.what() << endl;
         				   }
             break;
             case MINO_O:
			try{
             ptr = new MinoO;
				}
 catch(bad_alloc &memoryAlloc)
					{
                cerr << "Exception: " << memoryAlloc.what() << endl;
         				   }
             break;


         }
     return ptr;
     }
