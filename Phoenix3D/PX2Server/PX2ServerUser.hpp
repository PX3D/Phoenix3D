// PX2ServerUser.hpp

#ifndef PX2SERVERUSER_HPP
#define PX2SERVERUSER_HPP

#include "PX2ServerPre.hpp"

namespace PX2Server
{

	enum UserState
	{
		SUT_INIT = 0,  // ��ʼ����û��������
		SUT_NEWROLE,   // ������ɫ
		SUT_IN_GAME,   // ��¼�ɹ�������Ϸ
		SUT_IN_LEVEL,  // �ؿ���, statedata = cur_levelid
		SUT_MATCHING,  // ����սƥ����
		SUT_PVP,       // PVP��ս��
		SUT_ROB        // �Ӷ�ģʽ��
	};

	class User
	{
	public:
		User();
		~User();

		void Reset();

		void SetState(UserState state);
		UserState GetState() const;

	public:
		bool IsUsed;
		unsigned int UIN;
		unsigned int ClientID;

	protected:
		UserState mState;
	};

#include "PX2ServerUser.inl"

}

#endif