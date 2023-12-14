#ifndef _CAR_H_
#define _CAR_H_

//自動車クラス
class CCae{
	public:
		//コンストラクタ
		CCar();
		//デストラクタ
		~CCar();
		//移動メゾット
		void move();
		//燃料補給メゾット
		void supply(int fuel);
	private:
		int m_fuel;	//燃料
		int m_migration;//移動距離
};
#endif
