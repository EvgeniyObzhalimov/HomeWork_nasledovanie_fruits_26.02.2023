#include<iostream>
#include<vector>
#include<string>
/*	������� ������� ����� ��������
�� ���� ������������ ������ ������� � �����
	������� ������� ����� �����
�� ���� ������������ ������ ������ � �����
	������� � ����� ������ ����� �������� � ������ ������� � ���� �����
�� ����� ������ ������ ����� � ������� ������
	����� ������� ��������� �������� � ������ � ��������� ����������������� �� �������

�������������� ������� ������� ��� ����� � ����� ������ ���������
����� ���� ������ ���������� ������������ ������ � ��������� (����)
� ���������� ������������ ��������
������� �������� ������ ��� ���� ������ ������ �� �� ����������� ���������� � ����
��������� �� ���������
��������� ������������ ���������� ���������� ������ �������������� ������(������ ���
� ������)*/

class Plant{
public:

	void name(std::string name) {
		name_ = name;
	}
	std::string name() const{
		return name_;
	}
	int plantCount() const {
		return plodCount_;
	}
	void plantCount(int new_count) {
		plodCount_ = new_count;
	}
	virtual void whichPlant() const {
		std::cout << "nothing'\n'";
	}

	virtual~Plant() {
		std::cout << this << "Plant destructor";
	}

	
private:
	std::string name_;
	int plodCount_;

};

class Bushes:public Plant{
public:
	void type(bool new_type) {
		typeOfplant_ = new_type;
	}
	bool type()const {
		return typeOfplant_;
	}

	void whichPlant() const override{
		std::cout << "Type of Plant'\n'";
	}
	virtual~Bushes() {
		std::cout << this << "Bush destructor'\n'";
	}

private:
	bool typeOfplant_;
};
class Trees:public Plant{
public:

private:
	std::string treeName_;
	int plodCount_;
};


class Plod{
public:
	int count()const {
		return count_;
	}
	bool type()const {
		return type_;
	}
	virtual void whichPlod() const {
		std::cout << "nothing'\n'";
	}
	virtual ~Plod() {
		std::cout << this << "Plod destructor'\n'";
	}
	void name(std::string new_name) {
		name_ = new_name;
	}
private:
	int count_;
	bool type_;
	std::string name_;
};

class Berries:public Plod{
public:
	bool typeOfberry()const {
		return typeOfberry_;
	}

private:

	bool typeOfberry_;

};
class Fruits:public Plod{
public:

	bool typeOffruit()const {
		return typeOffruit_;
	}
	void whichPlod()const override {
		std::cout << "Fruit" << "\n";
	}
	void name(std::string new_name) {
		name_ = new_name;
	}

private:
	bool typeOffruit_;
	std::string name_;
};
void basket() {
	std::vector<Plod*> putIn;
	for (size_t i = 0; i < putIn.size(); i++)
	{Plod* tmp;
		if (i % 2) {
			
			tmp = new Fruits;
			tmp->name("Fresh");
		}
		else {
			tmp = new Berries;
			tmp->name("CherryBerry");
		}
	}
	putIn.push_back(tmp);
}

int main() {
	
	Bushes a;
	a.name("");



	return 0;


}


