#pragma once
#include<Layer.hpp>

class HiddenLayer :public Layer
{
public:
	HiddenLayer(const size_t&, ACTIVATION_TYPE = ACTIVATION_TYPE::RELU_ACTIVATION);
	~HiddenLayer();

private:
	//Eigen::MatrixXd weight;
};
