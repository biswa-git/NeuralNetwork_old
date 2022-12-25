#include<Model.hpp>
#include<Activation.hpp>
#include<math.h>
Model::Model()
{
}

Model::~Model()
{
}

void Model::SetInput(const Eigen::VectorXd& input_vec)
{
	m_layer.emplace_back(InputLayer(input_vec));
}

void Model::AddHiddenLayer(const size_t& num_of_node, ACTIVATION_TYPE activation)
{
	m_layer.emplace_back(HiddenLayer(num_of_node, activation));
}

void Model::AddOutputLayer(const size_t& num_of_node, ACTIVATION_TYPE activation)
{
	m_layer.emplace_back(OutputLayer(num_of_node, activation));
}

void Model::Freeze()
{
	for (size_t i = 1; i < m_layer.size(); i++)
	{
		m_layer[i].SetWeightDimension(m_layer[i].GetSize(), m_layer[i - 1].GetSize());
		m_layer[i - 1].SetNextLayer(&m_layer[i]);
		m_layer[i].SetPreviousLayer(&m_layer[i - 1]);


	}
}

void Model::ForwardPropagation()
{
	Activation activation;
	for (size_t i = 1; i < m_layer.size(); i++)
	{
		m_layer[i].GetData() = m_layer[i].GetWeight() * m_layer[i - 1].GetData() + m_layer[i].GetBias();
		std::cout << "input: \n" << m_layer[i - 1].GetData() << std::endl;
		std::cout << "output: \n" << m_layer[i].GetData() << std::endl;
		m_layer[i].ApplyActivation();
		std::cout << "output after activation: \n"<< m_layer[i].GetData() << std::endl;
	}
}

