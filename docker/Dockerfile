FROM ubuntu-upstart:14.04

### Install packages.
COPY install/packages.sh /tmp/
RUN DEBIAN_FRONTEND=noninteractive /tmp/packages.sh

### Copy the source code and install.
COPY . /usr/local/src/btr_client/
ENV code_dir /usr/local/src/btr_client
WORKDIR /usr/local/src/btr_client/
RUN ["install/install.sh"]

### Set the default dir to the code of the application.
WORKDIR /var/www/bcl/profiles/btr_client
