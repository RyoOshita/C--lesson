#ifndef _CAR_H_
#define _CAR_H_

//�����ԃN���X
class CCae{
	public:
		//�R���X�g���N�^
		CCar();
		//�f�X�g���N�^
		~CCar();
		//�ړ����]�b�g
		void move();
		//�R���⋋���]�b�g
		void supply(int fuel);
	private:
		int m_fuel;	//�R��
		int m_migration;//�ړ�����
};
#endif
