kill `cd /usr/local/var/run/openvswitch && cat ovsdb-server.pid ovs-vswitchd.pid`
rm -R /usr/local/etc/openvswitch
rmmod openvswitch
rmmod libcrc32c 
