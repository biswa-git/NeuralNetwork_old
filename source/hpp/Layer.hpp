#pragma once
#include<Params.hpp>

class Layer
{
public:
	Layer();
	~Layer();

	static std::map<std::string, int> layer_type_map;

	void SetSize(const size_t&);
	size_t GetSize();

	void SetNextLayer(Layer*);
	void SetPreviousLayer(Layer*);

	void SetWeightDimension(const size_t&, const size_t&);

	Eigen::VectorXd& GetData();
	Eigen::MatrixXd& GetWeight();
	Eigen::VectorXd& GetBias();

protected:
	std::string type;
	size_t data_size;
	Eigen::VectorXd data;
	Eigen::MatrixXd weight;
	Eigen::VectorXd bias;
	Layer* prev;
	Layer* next;

};
