#include<Model.hpp>

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

void Model::AddHiddenLayer(const size_t& num_of_node)
{
	m_layer.emplace_back(HiddenLayer(num_of_node));
}

void Model::AddOutputLayer(const size_t& num_of_node)
{
	m_layer.emplace_back(OutputLayer(num_of_node));
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
	for (size_t i = 1; i < m_layer.size(); i++)
	{
		m_layer[i].GetData() = m_layer[i].GetWeight() * m_layer[i - 1].GetData() + m_layer[i].GetBias();

		std::cout << "input: \n"<< m_layer[i - 1].GetData() << std::endl;
		std::cout << "output: \n"<< m_layer[i].GetData() << std::endl;;
	}
}

