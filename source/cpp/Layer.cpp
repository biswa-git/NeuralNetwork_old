#include<Layer.hpp>
#include<Activation.hpp>

Layer::Layer()
{
	data_size = 0;
	next = nullptr;
	prev = nullptr;
}

Layer::~Layer()
{
}


std::map<std::string, LAYER_TYPE> Layer::layer_type_map =
{
	{"input layer", LAYER_TYPE::INPUT_LAYER},
	{"hidden layer", LAYER_TYPE::HIDDEN_LAYER},
	{"output layer", LAYER_TYPE::OUTPUT_LAYER}
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

void Layer::ApplyActivation()
{
	Activation activation;
	switch (activation_type)
	{
	case ACTIVATION_TYPE::LINEAR_ACTIVATION:
		activation.Linear(data);
		break;
	case ACTIVATION_TYPE::RELU_ACTIVATION:
		activation.ReLU(data);
		break;
	case ACTIVATION_TYPE::GELU_ACTIVATION:
		activation.GeLU(data);
		break;
	case ACTIVATION_TYPE::SIGMOID_ACTIVATION:
		activation.Sigmoid(data);
		break;
	}
}

