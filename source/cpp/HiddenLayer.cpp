#include<HiddenLayer.hpp>


HiddenLayer::HiddenLayer(const size_t& size, ACTIVATION_TYPE activation)
{
	type = "hidden layer";
	data_size = size;
	data = Eigen::VectorXd(size);
	bias = Eigen::VectorXd::Zero(size);
	activation_type = activation;
}

HiddenLayer::~HiddenLayer()
{
}
