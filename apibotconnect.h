#pragma once
#include<iostream>
#include<string>

class API_INIT
{
public:
	API_INIT(int START, int END, std::string IP)
	{
		START_TIME = START;
		END_TIME = END;
		EXTERNAL_IP = IP;
		if (START > END) { DIFFERENCE_TIME = START - END; }
		if (START < END) { DIFFERENCE_TIME = END - START; }
	}
	bool CONNECT(std::string ip)
	{
		if (ip.size() >= 7) { return true; }
		else { return false; }
	}
	bool SEND_DATA(std::string data) {
		if (data.size() > 0) { return true; }
		else { return false; }
	}
	std::string GET_EXTERNAL_IP() { return EXTERNAL_IP; }
	int GET_DIFFERENCE_TIME() { return DIFFERENCE_TIME; }
private:
	int START_TIME;
	int END_TIME;
	int DIFFERENCE_TIME;
	std::string EXTERNAL_IP;
};