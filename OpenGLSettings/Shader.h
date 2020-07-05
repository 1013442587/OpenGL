#pragma once
#include <string>
class Shader
{
public:
	Shader(const char* vertexPath, const char* fragmentPath);
	std::string vertexString;
	std::string fragmentString;
	const char* vertexSource;
	const char* fragmentSource;
	unsigned int ID; //Shader Program ID
	void use();
	//~Shader();

private:
	void checkCompileErrors(unsigned int ID, std::string type);
};

