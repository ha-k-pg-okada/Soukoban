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
		Moved = value;
	}
	int GetMoved()
	{
		return Moved;
	}

private:
	// �C���X�^���X����h�����߂̏���
	MovedSingleton() {}

	int Moved;
};

#endif // !MOVED_SINGLETON

