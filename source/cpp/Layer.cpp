#include<Layer.hpp>

Layer::Layer()
{
	data_size = 0;
	next = nullptr;
	prev = nullptr;
}

Layer::~Layer()
{
}


std::map<std::string, int> Layer::layer_type_map =
{
	{"input layer", INPUT_LAYER},
	{"hidden layer", HIDDEN_LAYER},
	{"output layer", OUTPUT_LAYER}
};

void Layer::SetSize(const size_t& size)
{
	data = Eigen::VectorXd(size);
}

size_t Layer::GetSize()
{
	return data_size;
}

void Layer::SetNextLayer(Layer* next_layer)
{
	next = next_layer;
}

void Layer::SetPreviousLayer(Layer* previous_layer)
{
	prev = previous_layer;
}

void Layer::SetWeightDimension(const size_t& m, const size_t& n)
{
	weight = Eigen::MatrixXd::Random(m, n);
	//setting random weights between -1 to +1
	weight = (weight * 2) - Eigen::MatrixXd::Ones(m,n);
}

Eigen::VectorXd& Layer::GetData()
{
	// // O: insert return statement here
	return data;
}

Eigen::MatrixXd& Layer::GetWeight()
{
	// // O: insert return statement here
	return weight;
}

Eigen::VectorXd& Layer::GetBias()
{
	// // O: insert return statement here
	return bias;
}

