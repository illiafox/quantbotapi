### quantbotapi
This API opens up the possibility of transmitting data to the neurons of the brain of bots

 **WARNING: ONLY FOR BOTS**


We have seen a lot of stupid people in our life, so if your ~~friend/target/mother~~ has **internet (ip adress)**, you can send some data to **brain**!

### ***Instruction and requirements:***
- Open your *C++ compiler* (I use Visual Studio 2019)
- Import *"apibotconnect.h"* 
- Write code

### ***Simple Example (main.cpp):***
```
#include<iostream>
#include<string>
#include "apibotconnect.h"


int main()
{
	API_INIT Test(2, 5, "192.168.0.1"); // INITIALIZATION: name( your GMT+..., target GMT+..., target external ip)
	while (Test.CONNECT(Test.GET_EXTERNAL_IP()) == false) { Test.CONNECT(Test.GET_EXTERNAL_IP()); } // trying to connect
	std::string data = ""; // data
	while (Test.SEND_DATA(data) == false) 
	{
		getline(std::cin, data);
		if (data.compare("exit")) { return 0; } // if we type "exit", we will stop the code
		else { Test.SEND_DATA(data);}
	}
	return 0;
}
```


### ***FUNCTIONS***

 **API_INIT(int,int,string)** - initialization of API  *(your GMT+..., target GMT+..., target external ip)*
 
 **CONNECT(string)** - Try connect and return *"true"* if successful  *(target external ip)*
 
 **SEND_DATA(string)** - Try send data to target and return *"true"* if successful  *(data to send)*

**GET_EXTERNAL_IP()** - Return *target* external ip  *(nothing)*

**GET_DIFFERENCE_TIME()** - Return *time difference* between you and targer in hours  *(nothing)*

### ***MY PLANS***

1. [ ] connect not only for bots
2. [ ] js version
3. [x] c++ version
4. [ ] python version
