#pragma once

class ServerServiceAsync : 
	public NetService<ServerTaskAsync>, 
	public Singleton<ServerServiceAsync>
{
public:
	ServerServiceAsync();
	virtual ~ServerServiceAsync();
	virtual bool initialise();
	virtual bool shutdown()	;

	virtual void onInputCmd(const string& cmd);

	bool loadConfig();
	// ���´��ڱ�����Ϣ
	void updateWindowTitle();

	int getLocalPort() { return mLocalPort; }
	int getMaxClient() { return mMaxClient; }

protected:
	int mLocalPort;
	int mMaxClient;

private:
};
