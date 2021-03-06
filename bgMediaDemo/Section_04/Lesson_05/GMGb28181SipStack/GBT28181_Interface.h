#ifndef _GBT28181_INTERFACE_H_
#define _GBT28181_INTERFACE_H_

//
// 本类定义了基础的28181信令接口（基于2011标准）
// 后续2015/2016标准通过继承扩展来实现
//

typedef struct _GBT28181_LOCAL_SIP_SERVICE_SETTINS_
{
	char ip_[32];
};

typedef struct _GBT28181_UP_SIP_SERVICE_SETTINS_
{

};

typedef struct _GBT28181_DOWN_SIP_SERVICE_SETTINS_
{

};

class GBT28181Interface
{
public:
	GBT28181Interface();
	virtual ~GBT28181Interface();

	// 初始化GB/T 28181相关信息
	// 初始化需要传入的数据
	// 1.本地监听IP、端口
	// 2.本地UAC地址编码（国标ID）吧
	// 3.本地UAC密码
	// 4.远端UAS-IP、端口
	// 5.超时时间
	int Init();

	//////////////////////////////////////////////////////////////////////////
	//
	// 1.注册和注销
	//
	// 基本要求：
	//
	// - SIP客户端、网关、SIP设备、安全防范视频监控联网系统等SIP代理（SIP UA）
	//   使用RFC 3261中定义的方法REGISTER进行注册和注销。
	// 
	// - 注册和注销时应对设备进行认证，认证方式应支持数字摘要认证方式，高安全
	//   级别的宜支持数字证书的认证方式，数字证书的格式另外定义。
	//
	//////////////////////////////////////////////////////////////////////////
public:
	// 1.1.基本注册
	int Register();

	// 1.2.基于数字证书的双向认证注册
	int Register_with_digital_certificate();

	// 1.3.注销
	int Unregister();


	// 2.实时视音频点播
public:
	// 2.1.客户端主动发起

	// 2.2.第三方呼叫控制


	// 3.设备控制
public:
	// 3.1.无应答设备控制命令

	// 3.2.有应答设备控制命令


	// 4.报警事件通知和分发
public:
	// 4.1.报警事件


	// 5.网络设备信息查询
public:
	// 5.1.设备目录查询

	// 5.2.设备信息查询

	// 5.3.设备状态查询


	// 6.状态信息报送
public:
	// 6.1.状态信息报送


	// 7.设备视音频文件检索
public:
	// 7.1.设备视音频文件检索


	// 8.历史视音频回放
public:
	// 8.1.客户端主动发起历史视音频回放

	// 8.2.


	// 9.视音频文件下载
public:
	


	// 10.校时
public:
	


	// 11.订阅和通知
public:
	

private:
	void *context_;
};

#endif
