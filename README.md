# HexaconPreso
Presentation for the Coalfire Hexacon Conference

## To Run this from local directory using Docker use the following command line:
docker run -dit --name webserver -p 80:80 -v $(pwd):/usr/local/apache2/htdocs/ httpd:2.4


## Added a setup script that should help get Docker up and running on your machine if you need it. 
chmod +x ./setup.sh && ./setup.sh

## Overall Story Mode of the Preso
1. What is a WiFi Pineapple
	* 
	* Firmware/OpenWRT
	* Nano - Hardware
	* Tetra - Hardware
2. Why does it suck?
	* OpenWRT
	* Wrapper class
	* Any future research into PineAP binary
	* PineAP is closed source, but the plugins are open source
	* Hardware Limitations
3. How can I make a better one?
	* Hardware - Singleboard computers
	* Hardware - Adapters
	* Software - Open Source WiFi Tools
4. Future Work
	* Build a custom  PCB board - so for all you hardware hackers out there I need help
	* Future Wireless tools?
