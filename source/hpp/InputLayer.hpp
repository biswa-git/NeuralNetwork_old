#pragma once
#include<Layer.hpp>

class InputLayer :public Layer
{
public:
	InputLayer(const Eigen::VectorXd&);
	~InputLayer();

private:

};
