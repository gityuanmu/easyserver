#ifndef __TEST_CLIENT_H__
#define __TEST_CLIENT_H__

#include "ProtoLogin.pb.h"
#include "ProtoSelectChar.pb.h"
#include "ProtoCharData.pb.h"
#include "ProtoScene.pb.h"
using namespace Protocol;

//enum ConnectState
//{
//	Connect_None,	// ������
//	Connect_Login,	// �����˺ŷ�����
//	Connect_Game,	// ������Ϸ������
//};


enum ClientState
{
	State_Waiting,
	State_Register,	// ע���ʺ�
	State_Login,	// ��¼
	State_SelZone,	// ѡ��
	State_EnterZone,// ������Ϸ������
	State_SelChar,	// ѡ��ɫ
	State_StartGame,// ��ʼ��Ϸ(����)
	State_GameLogic,
};

class TestClient : 
	public ProtoClient,
	public TimerEvent,
	public Singleton<TestClient>
{
public:
	TestClient();
	virtual ~TestClient();

	void setIndex(uint index) { mIndex = index; }
	uint getIndex() { return mIndex; }

	//void setConnectState(ConnectState state) { mConnState = state; }
	//uint getConnectState() { return mConnState; }

	void setState(ClientState state) { mState = state; }
	uint getState() { return mState; }


protected:
	virtual bool onTimer();
	virtual bool handleProtoMsg(const EventArgs& args);

	bool handleErrorMsg(const EventArgs& args);
	bool handleLoginMsg(const EventArgs& args);
	bool handleSelCharMsg(const EventArgs& args);
	bool handleCharDataMsg(const EventArgs& args);
	bool handleRelationsMsg(const EventArgs& args);
	bool handleScriptMsg(const EventArgs& args);
	bool handleSceneMsg(const EventArgs& args);

	//////////////////////////////////////////////////////////////////////////

	void mainLoop();
	void updateRegister();
	void updateLogin();
	void updateSelectZone();
	void updateEnterZone();
	void updateSelectChar();
	void updateStartGame();
	void updateGameLogic();

	//////////////////////////////////////////////////////////////////////////

	bool getDefaultSkill(uint& skillId, uint& skillLevel);

	//////////////////////////////////////////////////////////////////////////

	void requestCharList();

	// ����ע������ʺ�
	void batchRegister();

private:
	void waiting();

private:
	uint mIndex;
	//ConnectState mConnState;
	ClientState mState;
	ElapseTimer mOneMillTimer;
	ElapseTimer mOneSecTimer;

	string mAccount;
	string mPassword;
	uint mLoginKey;
	uint mCharId;

	string mGatewayIP;
	uint mGatewayPort;

	vector<ZoneInfo> mZoneList;
	vector<SelectCharInfo> mCharList;

	CharBase mCharBase;
	CharBinaryData mCharBin;

};


#endif