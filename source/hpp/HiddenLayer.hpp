#pragma once
#include<Layer.hpp>

class HiddenLayer :public Layer
{
public:
	HiddenLayer(const size_t&);
	~HiddenLayer();

private:
	//Eigen::MatrixXd weight;
};
