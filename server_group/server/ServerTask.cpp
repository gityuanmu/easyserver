#include "ServerHeader.h"
#include "ServerTask.h"
#include "ProtoSvrLogin.pb.h"


//////////////////////////////////////////////////////////////////////////


void execServerTaskOnConnect(ScriptObject* pScript)
{
	pScript = ScriptManager::getInstance().createScript();
	printf("\n=============== 开始执行脚本 ================\n");
	pScript->dofile("./datas/scripts/server_task.lua");
	pScript->dostring("ServerTask_OnConnect()");
	ScriptManager::getInstance().printInfo();
	printf("\n=============== 结束脚本执行 ================\n");
	ScriptManager::getInstance().destroyScript(pScript);
}

void execServerTaskOnDisconnect(ScriptObject* pScript)
{
	pScript = ScriptManager::getInstance().createScript();
	printf("\n=============== 开始执行脚本 ================\n");
	pScript->dofile("./datas/scripts/server_task.lua");
	pScript->dostring("ServerTask_OnDisconnect()");
	ScriptManager::getInstance().printInfo();
	printf("\n=============== 结束脚本执行 ================\n");
	ScriptManager::getInstance().destroyScript(pScript);
}

void execServerTaskHandleProtoMsg(TCPTask* pTask, ScriptObject* pScript, const EventArgs& args)
{
	const NetEventArgs& netArgs = (const NetEventArgs&)args;
	if (netArgs.protoMsg == NULL)
		return;

	LoginCmd::RequestRegisterGameServer* loinMsg = (LoginCmd::RequestRegisterGameServer*)netArgs.protoMsg;

	pScript = ScriptManager::getInstance().createScript();
	printf("\n=============== 开始执行脚本 ================\n");
	pScript->dofile("./datas/scripts/server_task.lua");
	//Event2Proto();
	ProtoMessage* pMsg = netArgs.protoMsg;
	lua_tinker::call<void,TCPTask*,ProtoMessage*>(pScript->getState(), "ServerTask_handleProtoMsg", pTask, pMsg);
	//pScript->dostring("ServerTask_handleProtoMsg()");
	ScriptManager::getInstance().printInfo();
	printf("\n=============== 结束脚本执行 ================\n");
	ScriptManager::getInstance().destroyScript(pScript);
}

//////////////////////////////////////////////////////////////////////////

ServerTaskAsync::ServerTaskAsync()
{
	mUniqueId = 0;
}

ServerTaskAsync::~ServerTaskAsync()
{

}

bool ServerTaskAsync::OnConnect()
{
	execServerTaskOnConnect(NULL);

	return true;
}

// 连接断开时被调用
void ServerTaskAsync::OnDisconnect()
{
	execServerTaskOnDisconnect(NULL);
}

bool ServerTaskAsync::handleProtoMsg(const EventArgs& args)
{
	stBaseCmd* pCmd = Event2BaseCmd(args);
	if (pCmd->cmd != SVR_MSG_SUPER_SERVICE) {

		// 回显测试
		//sendCmd(cmd, cmdLen);
		//return true;

		LOGD("非法的服务器消息号 cmd=%d", pCmd->cmd);
		return false;
	}

	// 消息性能记录
	FUNC_PF_EXT(strformat("消息执行时间过长para=%d",pCmd->para), 50);

	execServerTaskHandleProtoMsg(this, NULL, args);

	return true;
}


//////////////////////////////////////////////////////////////////////////


ServerTaskSync::ServerTaskSync()
{
	mUniqueId = 0;
}

ServerTaskSync::~ServerTaskSync()
{

}

bool ServerTaskSync::OnConnect()
{
	execServerTaskOnConnect(NULL);

	return true;
}

// 连接断开时被调用
void ServerTaskSync::OnDisconnect()
{
	execServerTaskOnDisconnect(NULL);
}

bool ServerTaskSync::handleProtoMsg(const EventArgs& args)
{
	stBaseCmd* pCmd = Event2BaseCmd(args);
	//if (pCmd->cmd != SVR_MSG_SUPER_SERVICE) {

	//	// 回显测试
	//	//sendCmd(cmd, cmdLen);
	//	//return true;

	//	LOGD("非法的服务器消息号 cmd=%d", pCmd->cmd);
	//	return false;
	//}

	// 消息性能记录
	FUNC_PF_EXT(strformat("消息执行时间过长para=%d",pCmd->para), 50);

	execServerTaskHandleProtoMsg(this, NULL, args);

	return true;
}
