#include<InputLayer.hpp>


InputLayer::InputLayer(const Eigen::VectorXd& input_vec)
{
	type = "input layer";
	data_size = input_vec.size();
	data = input_vec;
}

InputLayer::~InputLayer()
{
}
