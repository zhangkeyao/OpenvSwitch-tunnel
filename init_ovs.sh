# 发现 openvswitch.ko 依赖于 libcrc32c 模块，于是先载入 libcrc32c
modprobe libcrc32c
modprobe gre
# 载入 openvswitch 模块
modprobe openvswitch
# 创建 ovsdb 数据库
mkdir -p /usr/local/etc/openvswitch
ovsdb-tool create /usr/local/etc/openvswitch/conf.db ./vswitchd/vswitch.ovsschema
# 配置启动 ovsdb 数据库
ovsdb-server --remote=punix:/usr/local/var/run/openvswitch/db.sock \
                 --remote=db:Open_vSwitch,Open_vSwitch,manager_options \
                 --private-key=db:Open_vSwitch,SSL,private_key \
                 --certificate=db:Open_vSwitch,SSL,certificate \
                 --bootstrap-ca-cert=db:Open_vSwitch,SSL,ca_cert \
                 --pidfile --detach
# 初始化数据库                 
ovs-vsctl --no-wait init
# 开启 openvswitch 守护进程
ovs-vswitchd --pidfile --detach
