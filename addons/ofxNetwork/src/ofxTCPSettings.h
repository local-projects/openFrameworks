#pragma once

class ofxTCPSettings {
public:
	ofxTCPSettings(std::string _address, int _port) {
		address = _address;
		port = _port;
	}
	ofxTCPSettings(int _port) {
		port = _port;
	}

	std::string address;
	std::string srcAddress; //for client, what interface do you want to send from?
	int port;
	bool blocking = false;

	std::string messageDelimiter = "[/TCP]";

};
