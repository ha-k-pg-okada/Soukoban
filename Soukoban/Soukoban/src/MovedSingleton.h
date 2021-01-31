#ifndef MOVED_SINGLETON
#define MOVED_SINGLETON

class MovedSingleton
{
public:
	// �C���X�^���X���擾���邽�߂̃Q�b�^�[
	static MovedSingleton* Instance()
	{
		// ���̕ϐ������̃N���X�̗B��̃C���X�^���X
		static MovedSingleton instance;

		return &instance;
	}

	void SetMoved(int value)
	{
		m_Moved = value;
	}
	int GetMoved()
	{
		return m_Moved;
	}

private:
	// �C���X�^���X����h�����߂̏���
	MovedSingleton() 
	{
		m_Moved = 0;
	}

	int m_Moved;
};

#endif // !MOVED_SINGLETON

