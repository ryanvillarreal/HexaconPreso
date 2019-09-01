# HexaconPreso
Presentation for the Coalfire Hexacon Conference

## To Run this from local directory using Docker use the following command line:
docker run -dit --name webserver -p 80:80 -v $(pwd):/usr/local/apache2/htdocs/ httpd:2.4


## Added a setup script that should help get Docker up and running on your machine if you need it. 
chmod +x ./setup.sh && ./setup.sh

