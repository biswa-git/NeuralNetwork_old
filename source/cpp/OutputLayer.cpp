#include<OutputLayer.hpp>

OutputLayer::OutputLayer(const size_t& size, ACTIVATION_TYPE activation)
{
	type = "output layer";
	data_size = size;
	data = Eigen::VectorXd(size);
	bias = Eigen::VectorXd::Zero(size);

	activation_type = activation;
}

OutputLayer::~OutputLayer()
{
}
