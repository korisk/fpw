//==========================================
//  cppmod.cpp, finally, my C++ code
#include "kernel_api.h"
#include "new.h"
#include "cppmod.h"
class Driver {
public:

 Driver(unsigned int dev_id):_id(dev_id){printk(KERN_INFO "C++ driver started\n");}
 ~Driver(void){printk(KERN_INFO "Goodbye C++ driver\n");}
private:
unsigned int _id;
};

static Driver *g_driver = NULL;
extern "C" int start_driver(void *data) {
	g_driver = new Driver(*(unsigned int*)data);
	if(!g_driver)
	return -1;
	return 0;
}
extern "C" void stop_driver(void) {
if(g_driver)
	delete g_driver;
}
