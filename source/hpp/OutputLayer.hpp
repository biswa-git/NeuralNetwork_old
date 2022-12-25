#pragma once
#include<Layer.hpp>

class OutputLayer :public Layer
{
public:
	OutputLayer(const size_t&, ACTIVATION_TYPE = ACTIVATION_TYPE::RELU_ACTIVATION);
	~OutputLayer();

private:
	//Eigen::MatrixXd weight;
};
