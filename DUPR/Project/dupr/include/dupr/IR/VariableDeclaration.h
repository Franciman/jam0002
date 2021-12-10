#ifndef DUPR_IR_VARIABLEDECLARATION_H
#define DUPR_IR_VARIABLEDECLARATION_H

#include "dupr/IR/Statement.h"
#include <string>

namespace dupr::ir
{
	class VariableDeclaration : public Statement
	{
	private:
		std::string type;
		std::string name;

	public:
		VariableDeclaration(const std::string& type_, const std::string& name_)
			: Statement(Statement::Type::VariableDeclaration),
			  type(type_),
			  name(name_)
		{
		}

	public:
		std::string GetVariableName() const
		{
			return name;
		}

		std::string GetVariableType() const
		{
			return type;
		}

	public:
		void Print() override
		{
			std::cout << "\t\tVariable Declaration:\n";
			std::cout << "\t\t\tType: " + type + "\n";
			std::cout << "\t\t\tName: " + name + "\n";
		}
	};
}

#endif // DUPR_IR_VARIABLEDECLARATION_H
