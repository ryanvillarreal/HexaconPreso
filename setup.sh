#!/usr/bin/bash


# Add Docker PGP Key
curl -fsSL https://download.docker.com/linux/debian/gpg | apt-key add -

# Add the docker repo to the sources.list
echo 'deb [arch=amd64] https://download.docker.com/linux/debian buster stable' > /etc/apt/sources.list.d/docker.list

# Update to see changes
apt update

# Make sure to clean up previous Docker versions
apt remove docker docker-engine docker.io

# Install docker
apt install docker-ce

# Add docker to systemctl for easy startup
systemctl start docker
systemctl enable docker

