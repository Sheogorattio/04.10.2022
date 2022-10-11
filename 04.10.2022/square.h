#pragma once
namespace SQUARE {
	class square
	{
	protected:
		double side;
	public:
		square();
		square(double s);
		void input(double s);
		double getSide();
	};
}

