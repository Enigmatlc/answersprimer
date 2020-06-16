
#include<memory>
#include<vector>
#include<string>
#include<stdexcept>

class  StrBlob{
public:
	typedef std::vector<std::string>::size_type size_type;
	StrBlob() = default;
	StrBlob(std::initializer_list<std::string> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	// add and remove elements
	void push_back(const std::string& t) {
		data -> push_back(t);
	}
	void pop_back();
	// element access
	std::string& front();
	std::string& front() const;
	std::string& back();
	std::string& back() const;
private:
	std::shared_ptr<std::vector<std::string>> data;
	// throws msg if data[i] isn't valid
	void check(size_type i, const std::string& msg) const;
};
void StrBlob::check(size_type i, const string& msg) const
{
	if (i >= data->size())
		throw out_of_range(msg);
}
