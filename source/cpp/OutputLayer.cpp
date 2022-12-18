#include<OutputLayer.hpp>

OutputLayer::OutputLayer(const size_t& size)
{
	type = "output layer";
	data_size = size;
	data = Eigen::VectorXd(size);
	bias = Eigen::VectorXd::Zero(size);
}

OutputLayer::~OutputLayer()
{
}
