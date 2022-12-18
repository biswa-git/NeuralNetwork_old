#pragma once
#include<Layer.hpp>

class OutputLayer :public Layer
{
public:
	OutputLayer(const size_t&);
	~OutputLayer();

private:
	//Eigen::MatrixXd weight;
};
