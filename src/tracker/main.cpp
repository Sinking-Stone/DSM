/**
 * (13_main)主函数
 * wfl:2024-4-1
*/
// 定义主函数
#include "globals.hpp"
#include "server.hpp"

int main(void){
    // 初始化ACL库
    acl::acl_cpp_init();
    acl::log::stdout_open(true);

    // 创建并运行服务器
    server_c& server=acl::singleton2<server_c>::get_instance();
    server.set_cfg_str(cfg_str);
    server.set_cfg_int(cfg_int);
    server.run_alone("127.0.0.1:21000","../etc/tracker.cfg");
    return 0;
}