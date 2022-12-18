#include<HiddenLayer.hpp>


HiddenLayer::HiddenLayer(const size_t& size)
{
	type = "hidden layer";
	data_size = size;
	data = Eigen::VectorXd(size);
	bias = Eigen::VectorXd::Zero(size);
}

HiddenLayer::~HiddenLayer()
{
}
